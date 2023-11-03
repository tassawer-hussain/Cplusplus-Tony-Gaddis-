/*
	11. Population
	Write a program that will predict the size of a population of organisms. The program
	should ask the user for the starting number of organisms, their average daily population
	increase (as a percentage), and the number of days they will multiply. A loop should display
	the size of the population for each day.

	Input Validation: Do not accept a number less than 2 for the starting size of the population.
	Do not accept a negative number for average daily population increase. Do
	not accept a number less than 1 for the number of days they will multiply.
*/

#include <iostream>
using namespace std;

int main()
{
	int sSize, days;
	double dailyIncrease;

	cout<<"Enter the starting Size: ";
	cin>>sSize;
	while(sSize<2)
	{
		cout<<"Error MSG!\nStarting size atleast 2.\nPlease enter again: ";
		cin>>sSize;
	}

	cout<<"Enter the Average Population Increse Size: ";
	cin>>dailyIncrease;
	while(dailyIncrease<0)
	{
		cout<<"Error MSG!\nAverage Population Increse Size must be greater then 0.\nPlease enter again: ";
		cin>>dailyIncrease;
	}

	cout<<"Enter the Number of days they will multiply: ";
	cin>>days;
	while(days<1)
	{
		cout<<"Error MSG!\nDays they will multiply must be atleast 1.\nPlease enter again: ";
		cin>>days;
	}

	cout<<"\nAfter Days\t\tPopulation Size";
	cout<<"\n--------------------------------------";
	for(int i=1; i<=days; i++)
	{
		sSize = sSize + (sSize*dailyIncrease)/100;
		cout<<"\n   "<<i<<"\t\t\t   "<<sSize;
	}
	cout<<"\n\n";

	return 0;
}
