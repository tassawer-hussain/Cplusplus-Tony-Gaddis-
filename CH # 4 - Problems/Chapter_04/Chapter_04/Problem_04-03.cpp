/*
	3. Magic Dates
	The date June 10, 1960 is special because when we write it in the following format,
	the month times the day equals the year.
	6/10/60
	Write a program that asks the user to enter a month (in numeric form), a day, and a
	two-digit year. The program should then determine whether the month times the day
	is equal to the year. If so, it should display a message saying the date is magic. Otherwise
	it should display a message saying the date is not magic.
*/



#include <iostream>
using namespace std;

int main()
{
	int day, month, year;

	cout<<"Enter Day: ";
	cin>>day;

	cout<<"Enter Month: ";
	cin>>month;

	cout<<"Enter 2-Digit Year: ";
	cin>>year;

	if(year == day*month)
	{
		cout<<"\nThe DATE  is Magic Date.\n";
	}
	else
	{
		cout<<"\nThe DATE  is not Magic Date.\n";
	}

	return 0;
}
