// Problem 03: Test Average
// Write a program that asks for five test scores.
// The program should calculate the average test score and display it.
// The number displayed should be formatted in fixed-point
// notation, with one decimal point of precision.


#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	double test[size];

	double sum = 0, // use to sum the Score of all Tests
		average; // use to store the Value of Average

	// take input and add the sum simultaneously
	int i = 0;
	while (i<size)
	{
		cout<<"Enter the Score Of Test 0"<< i+1 <<": ";
		cin>>test[i];
		sum += test[i];
		i++;
	}

	//calc Average
	average = sum / size;

	// output Formatting
	cout<<setprecision(1)<<fixed<<showpoint;
	cout<<"\n\n\n";

	// output to the Screen
	i = 0;
	while (i<size)
	{
		cout<<"The Score Of Test 0"<< i+1 <<": "<<test[i]<<endl;
		i++;
	}
	cout<<"The \"Average Score\" is: "<<average;
	cout<<"\n\n";
	return 0;
}
