/*
	1. Sum of Numbers
	Write a program that asks the user for a positive integer value. The program should
	use a loop to get the sum of all the integers from 1 up to the number entered. For
	example, if the user enters 50, the loop will find the sum of 1, 2, 3, 4, ... 50.
	
	Input Validation: Do not accept a negative starting number
*/


#include <iostream>
using namespace std;

int main()
{
	int input;
	cout<<"Enter A number: ";
	cin>>input;

	while(input < 1)
	{
		cout<<"Error MSG!\nThe number is Negative.\nEnter a positive number: ";
		cin>>input;
	}

	int sum = 0;
	for(int i=0; i<=input; i++)
	{
		sum = sum +i;
	
	}
	cout<<"\nSum of all the iteger from 1 up to the "<<input<<" is "<<sum;
	cout<<"\n\n";

	return 0;
}
