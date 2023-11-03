/*
	22. Long-Distance Calls
	A long-distance carrier charges the following rates for telephone calls:

	Starting Time of Call				Rate per Minute
		00:00�06:59							0.12
		07:00�19:00							0.55
		19:01�23:59							0.35

	Write a program that asks for the starting time and the number of minutes of the call,
	and displays the charges. The program should ask for the time to be entered as a floatingpoint
	number in the form HH.MM. For example, 07:00 hours will be entered as 07.00, and 16:28 hours will be entered as 16.28.

	Input Validation: The program should not accept times that are greater than 23:59.
	Also, no number whose last two digits are greater than 59 should be accepted.
	
	Hint: Assuming num is a floating-point variable, the following expression will give you its
	fractional part:
	num � static_cast<int>(num)
*/


#include <iostream>
using namespace std;

int main()
{
	double time;
	int minutes;

	cout<<"Enter the starting time of Call: ";
	cin>>time;

	while(time<00.00 || time>23.59)
	{
		cout<<"\nError MSG!\nTme must be in the range of 00:00 t0 23:59.\nPlaese enter again: ";
		cin>>time;
		while(time - static_cast<int>(time) > 0.59)
		{
			cout<<"Error MSG!\nMinutes range error.\nMinutes must be in the range of 00 to 59.\nPlease enter again: ";
			cin>>time;
		}
	}

	while(time - static_cast<int>(time) > 0.59)
	{
		cout<<"Error MSG!\nMinutes range error.\nMinutes must be in the range of 00 to 59.\nPlease enter again: ";
		cin>>time;
		while(time<00.00 || time>23.59)
		{
			cout<<"\nError MSG!\nTme must be in the range of 00:00 t0 23:59.\nPlaese enter again: ";
			cin>>time;
		}
	}

	cout<<"Enter the number of minutes of Call: ";
	cin>>minutes;

	if(time>=00.00 && time<=06.59)
	{
		cout<<"\n\nCall Timing: "<<time;
		cout<<"\nMinutes of call (Call Duration): "<<minutes;
		cout<<"\nRates per Minutes: 0.12";
		cout<<"\nCharges: "<<minutes*0.12;
		cout<<"\n\n";
	}
	else if(time>=07.00 && time<=19.00)
	{
		cout<<"\n\nCall Timing: "<<time;
		cout<<"\nMinutes of call (Call Duration): "<<minutes;
		cout<<"\nRates per Minutes: 0.55";
		cout<<"\nCharges: "<<minutes*0.55;
		cout<<"\n\n";
	}
	else
	{
		cout<<"\n\nCall Timing: "<<time;
		cout<<"\nMinutes of call (Call Duration): "<<minutes;
		cout<<"\nRates per Minutes: 0.35";
		cout<<"\nCharges: "<<minutes*0.35;
		cout<<"\n\n";
	}

	return 0;
}
