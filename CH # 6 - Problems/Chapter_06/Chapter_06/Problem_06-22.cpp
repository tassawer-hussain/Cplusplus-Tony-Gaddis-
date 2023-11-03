//	22. Prime Number List

/*	Use the isPrime function that you wrote in Programming Challenge 21 in a program
	that stores a list of all the prime numbers from 1 through 100 in a ﬁle.
*/


#include <iostream>
#include <fstream>
using namespace std;

//Function Prototype
bool isPrime(const int &);

int main() {
	int value;

	ofstream fout;
	fout.open("Problem_06-22.txt");

	cout<<"Enter a number to chaeck all the prime between 1 and the number: ";
	cin>>value;

	fout<<"\n\nList of Prime between 1 and "<<value<<": \n";
	for(int i=2; i<value; i++) {
		if(isPrime(i))
			fout<<i<<" ";
	}	
	fout<<"\n\n";
	return 0;
}

bool isPrime(const int & num) {
	int divisorCount=0;
	
	for (int i=1; i<=num; i++) {
		if(num%i==0)
			divisorCount++;
	}
	if (divisorCount==2)
			return true;
	else
		return false;
}
