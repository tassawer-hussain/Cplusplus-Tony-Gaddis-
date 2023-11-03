// Problem 04: Average Rainfall
// Write a program that calculates the average rainfall for three months. The program
// should ask the user to enter the name of each month, such as June or July, and the
// amount of rain (in inches) that fell each month. The program should display a message
// similar to the following:
// The average rainfall for June, July, and August is 6.72 inches.


#include <iomanip> // for output Formatting
#include <iostream>
using namespace std;

int main()
{
	const int size = 15;
	char month1[size];
	char month2[size];
	char month3[size];

	double m1Rain, m2Rain, m3Rain, average;

	// take Input
	cout<<"Enter the Name Of First Month: ";
	cin>> setw(size) >>month1;
	cout<<"Enter the Rain Fall For the Month Of "<< month1<<" in Inches: ";
	cin>>m1Rain;

	cout<<"Enter the Name Of Second Month: ";
	cin>> setw(size) >>month2;
	cout<<"Enter the Rain Fall For the Month Of "<< month2<<" in Inches: ";
	cin>>m2Rain;

	cout<<"Enter the Name Of Third Month: ";
	cin>> setw(size) >>month3;
	cout<<"Enter the Rain Fall For the Month Of "<< month3<<" in Inches: ";
	cin>>m3Rain;

	// Calculation
	average = ( m1Rain + m2Rain + m3Rain ) / 3.0;

	cout<<"\n\nThe average rainfall for "<< month1 <<", "<< month2 <<", and "
		<<month3<<" is "<< average <<" inches.\n\n";

	return 0;
}
