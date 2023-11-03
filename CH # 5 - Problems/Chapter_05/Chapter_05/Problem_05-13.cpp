/*
	13. The Greatest and Least of These
	Write a program with a loop that lets the user enter a series of integers. The user
	should enter -99 to signal the end of the series. After all the numbers have been
	entered, the program should display the largest and smallest numbers entered.
*/


#include <iostream>
using namespace std;

int main()
{
	int input, min=99999, max=0;

	cout<<"\nEnter a Number: ";
	cin>>input;

	while(input!= -99)
	{
		if(input<min)
			min = input;

		if(input>max)
			max = input;

		cout<<"Enter a Number: ";
		cin>>input;
	}

	cout<<"\n\nMinimum Number is: "<<min;
	cout<<"\nMaximum Number is: "<<max;
	cout<<"\n\n";

	return 0;
}
