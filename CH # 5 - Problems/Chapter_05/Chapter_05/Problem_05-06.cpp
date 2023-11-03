/*
	6. Distance Traveled
	The distance a vehicle travels can be calculated as follows:
	distance = speed * time
	
	For example, if a train travels 40 miles per hour for 3 hours, the distance traveled is 120 miles.
	Write a program that asks the user for the speed of a vehicle (in miles per hour) and
	how many hours it has traveled. The program should then use a loop to display the
	distance the vehicle has traveled for each hour of that time period. Here is an example
	of the output:
	What is the speed of the vehicle in mph? 40
	How many hours has it traveled? 3
	Hour			Distance Traveled
	--------------------------------
		1					40
		2					80
		3					120

	Input Validation: Do not accept a negative number for speed and do not accept any
	value less than 1 for time traveled.
*/


#include <iostream>
using namespace std;

int main()
{
	double speed;
	int hour;

	cout<<"What is the speed of the vehicle in mph: ";
	cin>>speed;

	while(speed<0)
	{
		cout<<"Error MSG!\nSpeed can't be Negative.\nPlease enter again: ";
		cin>>speed;
	}

	cout<<"How many hours has it traveled: ";
	cin>>hour;
	while(hour<1)
	{
		cout<<"Error MSG!\nHour can't be Less Then 1.\nPlease enter again: ";
		cin>>hour;
	}

	cout<<"\n   Hour\t\tDistance Traveled\n";
	cout<<"--------------------------------\n";

	for(int i=1; i<=hour; i++)
	{
		cout<<"     "<<i<<"\t\t\t"<<speed*i<<endl;
	}
	return 0;
}
