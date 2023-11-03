/*
	7. Pennies for Pay
	Write a program that calculates how much a person would earn over a period of time
	if his or her salary is one penny the first day and two pennies the second day, and continues
	to double each day. The program should ask the user for the number of days.

	Display a table showing how much the salary was for each day, and then show the
	total pay at the end of the period. The output should be displayed in a dollar amount,
	not the number of pennies.

	Input Validation: Do not accept a number less than 1 for the number of days worked.
*/


#include <iostream>
using namespace std;

int main()
{
	int day;
	cout<<"Enter number of days you Worked: ";
	cin>>day;
	while(day<1)
	{
		cout<<"Error MSG!\nDay can't be Less Then 1.\nPlease enter again: ";
		cin>>day;
	}

	int charges=1, sum=0;

	cout<<"\n   Day\t\t\tCharges (In Pennies)\n";
	cout<<"--------------------------------------------\n";
	for(int i=1; i<=day; i++)
	{
		sum+=charges;
		cout<<"    "<<i<<"\t\t\t\t  "<<charges<<endl;
		charges *= 2;
	}
	cout<<"--------------------------------------------\n";
	cout<<"   Total"<<"\t\t\t  $"<<sum/100<<"( "<<sum<<" pennies)\n\n";

	return 0;
}
