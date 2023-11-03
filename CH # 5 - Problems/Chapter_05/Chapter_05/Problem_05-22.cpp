//	22. Square Display

/*	Write a program that asks the user for a positive integer no greater than 15. The pro-
	gram should then display a square on the screen using the character �X�. The number
	entered by the user will be the length of each side of the square. For example, if the
	user enters 5, the program should display the following:
	XXXXX
	XXXXX
	XXXXX
	XXXXX
	XXXXX

	If the user enters 8, the program should display the following:
	XXXXXXXX
	XXXXXXXX
	XXXXXXXX
	XXXXXXXX
	XXXXXXXX
	XXXXXXXX
	XXXXXXXX
	XXXXXXXX
*/


#include <iostream>
using namespace std;

int main() {
	int count;
	cout<<"Enter a number to see a square not more than 15: ";
	cin>>count;

	while(count<1 || count>15) {
		cout<<"Please enter a number in 1 to 15. ";
		cin>>count;
	}

	cout<<"\n\n\n";
	for (int i=0; i<count; i++) {
		for (int j=0; j<count; j++)
			cout<<"X";
		cout<<endl;
	}
	cout<<"\n\n";
	return 0;
}
