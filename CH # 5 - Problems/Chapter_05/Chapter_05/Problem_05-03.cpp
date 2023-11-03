/*
	3. Ocean Levels
	Assuming the ocean�s level is currently rising at about 1.5 millimeters per year, write a
	program that displays a table showing the number of millimeters that the ocean will
	have risen each year for the next 25 years.
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout<<"After Year\t\tRising Level (in millimeters)\n";
	cout<<"-----------------------------------------------------";
	double risingLevel = 1.5;

	for(int i=1; i<=25; i++)
	{
		cout<<"\n   "<<setw(2)<<i<<"\t\t\t\t"<<risingLevel*i;
	}

	cout<<"\n\n";
	return 0;
}
