/*
	7. Time Calculator
	Write a program that asks the user to enter a number of seconds.
	
	� There are 60 seconds in a minute. If the number of seconds entered by the user is
	greater than or equal to 60, the program should display the number of minutes in
	that many seconds.

	� There are 3,600 seconds in an hour. If the number of seconds entered by the user
	is greater than or equal to 3,600, the program should display the number of hours
	in that many seconds.

	� There are 86,400 seconds in a day. If the number of seconds entered by the user is
	greater than or equal to 86,400, the program should display the number of days
	in that many seconds.
*/



#include <iostream>
using namespace std;

int main()
{
	int seconds;

	cout<<"Enter number of seconds: ";
	cin>>seconds;

	if(seconds<60)
	{
		cout<<"\n\nSeconds: "<<seconds<<"\n\n";
	}
	else if (seconds>= 60 && seconds < 3600)
	{
		cout<<"\n\nMinutes: "<< seconds/60 <<"\nSeconds: "<<seconds%60<<"\n\n";	
	}
	else if (seconds>= 3600 && seconds < 86400)
	{
		int hours = seconds /3600;
		seconds %= 3600;
		cout<<"\n\nHours: "<<hours<<"\nMinutes: "<< seconds/60 <<"\nSeconds: "<<seconds%60<<"\n\n";
	}
	else
	{
		int days = seconds/86400;
		seconds %= 86400;
		int hours = seconds /3600;
		seconds %= 3600;
		cout<<"\n\nDays: "<<days<<"\nHours: "<<hours<<"\nMinutes: "<< seconds/60 <<"\nSeconds: "<<seconds%60<<"\n\n";
	}

	return 0;
}
