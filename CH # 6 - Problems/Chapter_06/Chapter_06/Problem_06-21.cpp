//	21. isPrime Function

/*	A prime number is a number that is only evenly divisible by itself and 1. For example,
	the number 5 is prime because it can only be evenly divided by 1 and 5. The number
	6, however, is not prime because it can be divided evenly by 1, 2, 3, and 6. 

	Write a function name isPrime, which takes an integer as an argument and returns
	true if the argument is a prime number, or false otherwise. Demonstrate the function in a complete program.

	TIP: Recall that the % operator divides one number by another, and returns the remainder of the division.
	In an expression such as num1 % num2, the % operator will return 0 if num1 is evenly divisible by num2.
*/


#include <iostream>
using namespace std;

//Function Prototype
bool isPrime(const int &);

int main() {
	int value;

	cout<<"Enter a number to chaeck whether it is Prime or not: ";
	cin>>value;

	if(isPrime(value))
		cout<<"\n\nThe number "<<value<<" is Prime.\n\n";
	else
		cout<<"\n\nThe number "<<value<<" is not Prime.\n\n";
	
	return 0;
}

bool isPrime(const int & num) {
	int divisorCount=0;
	
	for (int i=1; i<=num; i++) {
		if(num%i==0) {
			divisorCount++;
			//cout<<i<<" ";
		}
		if (divisorCount>2)
			return false;
	}

	return true;
}
