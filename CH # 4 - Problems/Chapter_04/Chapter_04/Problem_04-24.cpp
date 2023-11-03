/*
	24. Internet Service Provider, Part 2
	Modify the Program in Programming Challenge 23 so that it also displays how much
	money Package A customers would save if they purchased packages B or C, and how
	much money Package B customers would save if they purchased Package C. If there
	would be no savings, no message should be printed.
*/


#include <iostream>
using namespace std;

int main()
{
	cout<<"\n***********************************";
	cout<<"\n*                                 *";
	cout<<"\n*               MENU              *";
	cout<<"\n*                                 *";
	cout<<"\n***********************************";
	cout<<"\n\nChoose a Package";
	cout<<"\nPackage A: For $9.95 per month 10 hours of access are provided.\nAdditional hours are $2.00 per hour.";
	cout<<"\n\nPackage B: For $14.95 per month 20 hours of access are provided.\nAdditional hours are $1.00 per hour.";
	cout<<"\n\nPackage C: For $19.95 per month unlimited access is provided.\n\n";

	cout<<"Choose an Option: ";
	char choice;
	cin>>choice;
	while(static_cast<int>(choice)<static_cast<int>('A') || static_cast<int>(choice)>static_cast<int>('C'))
	{
		cout<<"\nError MSG!\nWrong option is Selected.\nPlease Choose wisely (A, B or C): ";
		cin>>choice;
	}

	int hours;
	cout<<"Enter how many hours were used: ";
	cin>>hours;
	while(hours>744)
	{
		cout<<"\nError MSG!\nHours must be less the or equal to 744.\nPlease Enter Again: ";
		cin>>hours;
	}
	switch(choice)
	{
		case 'A':
			cout<<"\n\nPackage A:";
			cout<<"\nHours Used: "<<hours;
			cout<<"\nCharges: $9.95 per month with 10 hours of access and additional $2.00 per hours.";
			cout<<"\nCharges: ";
			if(hours<10*31)
			{
				cout<<"$9.95\n\n\n";
			}
			else
			{
				cout<<"$"<<9.95+(hours-10*31)*2.00;
				if(hours<20*31)
				{
					cout<<"\n\nIf you select Package B:";
					cout<<" You may save $"<< (9.95+(hours-10*31)*2.00) - (14.95);
					cout<<"\n";
				}
				else
				{
					cout<<"\nIf you select Package B:";
					cout<<" You may save $"<< (9.95+(hours-10*31)*2.00) - (14.95+(hours-20*31)*1.00);
					cout<<"\n";
				}

				if( (9.95+(hours-10*31)*2.0)-(19.95) >= 0)
				{
					cout<<"\n\nIf you select Package c:";
					cout<<" You may save $"<< (9.95+(hours-10*31)*2.00) - (19.95);
					cout<<"\n\n";
				}

			}
			break;

		case 'B':
			cout<<"\n\nPackage B:";
			cout<<"\nHours Used: "<<hours;
			cout<<"\nCharges: $14.95 per month with 20 hours of access and additional $1.00 per hours.";
			cout<<"\nCharges: ";
			if(hours<20*31)
			{
				cout<<"$14.95\n\n\n";
			}
			else
			{
				cout<<"$"<<14.95+(hours-20*31)*1.00<<"\n";
				
				if((14.95+(hours-20*31)*1.00) - (19.95)>0)
				{
					cout<<"\nIf you select Package C:";
					cout<<" You may save $"<< (14.95+(hours-20*31)*1.00) - (19.95);
					cout<<"\n\n";
				}
			}
			break;

		case 'C':
			cout<<"\n\nPackage C:";
			cout<<"\nHours Used: "<<hours;
			cout<<"\nCharges: $19.95 per month with unlimited access.";
			cout<<"\nCharges: $19.95\n\n\n";	
	}

	return 0;
}
