//	15. Lottery Application

/*	Write a program that simulates a lottery. The program should have an array of ﬁve integers named
	lottery, and should generate a random number in the range of 0 through 9 for each element in the array.
	The user should enter ﬁve digits which should be stored in an integer array named user.
	The program is to compare the corresponding elements in the two arrays and keep a count of the digits that match.
	For example, the following shows the lottery array and the user array with sample numbers stored
	in each. There are two matching digits (elements 2 and 4).

	lottery array:
		7  4  9  1  3 
	user array:
		4  2  9  7  3
	The program should display the random numbers stored in the lottery array and the number of matching digits.
	If all of the digits match, display a message proclaiming the user as a grand prize winner.
*/


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int lottery[5], user[5], match=0;
	srand(time(0));

	for (int i=0; i<5; i++) {
		lottery[i] = rand()%10;
	}

	for (int i=0; i<5; i++) {
		cout<<"Enter lottery "<<i+1<<" digit: ";
		cin>>user[i];
		while(user[i]<0 || user[i]>10) {
			cout<<"ERROR: Enter a number 0 to 9 only. :";
			cin>>user[i];
		}

		if(lottery[i] == user[i])
			match++;
	}
	
	cout<<"\n\nOriginal Lottery Number: ";
	for (int i=0; i<5; i++) 
		cout<<lottery[i];

	cout<<"\nUser Lottery Number: ";
	for (int i=0; i<5; i++) 
		cout<<user[i];

	if(match==5)
		cout<<"\n\nCongrats Dear! You are a grand prize winner.";
	else
		cout<<"\n\nSorry! Only "<<match<<" digits match. Best Of luck Next Time.\n\n\n";

	return 0;
}
