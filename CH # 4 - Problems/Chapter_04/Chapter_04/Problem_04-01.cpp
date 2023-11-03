// 1. Minimum/Maximum
// Write a program that asks the user to enter two numbers. The program should use the
// conditional operator to determine which number is the smaller and which is the larger.



#include <iostream>
using namespace std;

int main()
{
	int num1, num2;

	cout<<"Enter two numbers.";
	cin>> num1 >> num2;

	int min;
	min = (num1<num2) ? num1 : num2;

	cout<<"The num "<<min<<" is smaller.\n\n";

	return 0;
}
