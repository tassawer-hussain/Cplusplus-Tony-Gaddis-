/*
	10. Average Rainfall
	Write a program that uses nested loops to collect data and calculate the average rainfall
	over a period of years. The program should first ask for the number of years. The
	outer loop will iterate once for each year. The inner loop will iterate twelve times,
	once for each month. Each iteration of the inner loop will ask the user for the inches
	of rainfall for that month.

	After all iterations, the program should display the number of months, the total
	inches of rainfall, and the average rainfall per month for the entire period.

	Input Validation: Do not accept a number less than 1 for the number of years. Do not
	accept negative numbers for the monthly rainfall.
*/

#include <iostream>
using namespace std;

int main()
{
	int year;
	double totalRain=0, rain;

	cout<<"Enter Number of Years: ";
	cin>>year;
	while(year<1)
	{
		cout<<"Error MSG!\nYear Must be greater then 0.\Please Enter Again: ";
		cin>>year;
	}

	for(int i=1; i<=year; i++)
	{
		cout<<"\n\nRain fall Info for the year: "<<i;

		for(int j=1; j<=12; j++)
		{
			cout<<"Enter Rain in inches for month "<<j<<": ";
			cin>>rain;
			while(rain<0)
			{
				cout<<"Error MSG!\nRain Must be in positive.\Please Enter Again: ";
				cin>>rain;
			}

			totalRain += rain;
		}
	}

	cout<<"\n\n";
	cout<<"\n      ** Result **";
	cout<<"\nNumber of Months: "<<year*12;
	cout<<"\nTotal Inches of RainFall: "<<totalRain;
	cout<<"\nAverage RainFall per Month: "<<totalRain/(year*12);
	cout<<"\n\n";
	return 0;
}
