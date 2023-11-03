/*
	23. Internet Service Provider
	An Internet service provider has three different subscription packages for its customers:

	Package A: For $9.95 per month 10 hours of access are provided. Additional hours
	are $2.00 per hour.

	Package B: For $14.95 per month 20 hours of access are provided. Additional hours
	are $1.00 per hour.

	Package C: For $19.95 per month unlimited access is provided.

	Write a program that calculates a customer�s monthly bill. It should ask which package
	the customer has purchased and how many hours were used. It should then display
	the total amount due.
	Input Validation: Be sure the user only selects package A, B, or C. Also, the number
	of hours used in a month cannot exceed 744.
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
				cout<<"$"<<9.95+(hours-10*31)*2.00<<"\n\n\n";
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
				cout<<"$"<<14.95+(hours-20*31)*1.00<<"\n\n\n";
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
