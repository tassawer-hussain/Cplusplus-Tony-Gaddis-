//	24. Using Files—Numeric Processing

/*	The Student CD contains a ﬁle named random.txt. This ﬁle contains a long list of
	random numbers. Copy the ﬁle to your hard drive and then write a program that
	opens the ﬁle, reads all the numbers from the ﬁle, and calculates the following: 
	
	A) The number of numbers in the ﬁle
	B) The sum of all the numbers in the ﬁle (a running total)
	C) The average of all the numbers in the ﬁle 
	The program should display the number of numbers found in the ﬁle, the sum of the
	numbers, and the average of the numbers.
*/


// As we have no File. So, we generate a new one
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin;
	fin.open("Problem_05-24.txt");
	
	int count=0, sum=0, input; 

	if(!fin) {
		cout<<"ERROE: File cannot be open. Programme Going to terminate.";
		return 0;
	}
	else { 
		while(fin>>input) {
			sum+=input;
			count++;
		}
	}

	fin.close();
	cout<<"\n\nTotal numbers in File: "<<count;
	cout<<"\nTheir sum: "<<sum;
	cout<<"\nAverage "<<sum/count;
	cout<<"\n\n";
	return 0;
}
