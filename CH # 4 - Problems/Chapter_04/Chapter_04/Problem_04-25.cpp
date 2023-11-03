/*
	25. Internet Service Provider, Part 3
	Months with 30 days have 720 hours, and months with 31 days have 744 hours.
	February, with 28 days, has 672 hours. Enhance the input validation of the Internet Service
	Provider program by asking the user for the month (by name), and validating that
	the number of hours entered is not more than the maximum for the entire month.
	Here is a table of the months, their days, and number of hours in each.

	Month			Days			Hours
	January			31				744
	February		28				672
	March			31				744
	April			30				720
	May				31				744
	June			30				720
	July			31				744
	August			31				744
	September		30				720
	October			31				744
	November		30				720
	December		31				744
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


	int month;
	cout<<"\nSelect month for Billing Calculations: ";
	cout<<"\n1. January"
		<<"\n2. February"
		<<"\n3. March"
		<<"\n4. April"
		<<"\n5. May"
		<<"\n6. June"
		<<"\n7. July"
		<<"\n8. August"
		<<"\n9. September"
		<<"\n10. October"
		<<"\n11. November"
		<<"\n12. December\n";
	cout<<"Enter a number 1 to 12: ";
	cin>>month;
	while(month<=0 || month>12)
	{
		cout<<"\nError MSG!\nMonth must be 1 to 12.\nPlease Enter Again: ";
		cin>>month;
	}

	int hours;
	if (month == 2)
	{
		cout<<"Enter how many hours were used: ";
		cin>>hours;
		while(hours>672)
		{
			cout<<"\nError MSG!\nHours must be less the or equal to 672.\nPlease Enter Again: ";
			cin>>hours;
		}

		switch(choice)
		{
			case 'A':
				cout<<"\n\nPackage A:";
				cout<<"\nHours Used: "<<hours;
				cout<<"\nCharges: $9.95 per month with 10 hours of access and additional $2.00 per hours.";
				cout<<"\nCharges: ";
				if(hours<10*28)
				{
					cout<<"$9.95\n\n\n";
				}
				else
				{
					cout<<"$"<<9.95+(hours-10*28)*2.00;
					if(hours<20*28)
					{
						cout<<"\n\nIf you select Package B:";
						cout<<" You may save $"<< (9.95+(hours-10*28)*2.00) - (14.95);
						cout<<"\n";
					}
					else
					{
						cout<<"\nIf you select Package B:";
						cout<<" You may save $"<< (9.95+(hours-10*28)*2.00) - (14.95+(hours-20*28)*1.00);
						cout<<"\n";
					}

					if( (9.95+(hours-10*28)*2.0)-(19.95) >= 0)
					{
						cout<<"\n\nIf you select Package c:";
						cout<<" You may save $"<< (9.95+(hours-10*28)*2.00) - (19.95);
						cout<<"\n\n";
					}

				}
				break;

			case 'B':
				cout<<"\n\nPackage B:";
				cout<<"\nHours Used: "<<hours;
				cout<<"\nCharges: $14.95 per month with 20 hours of access and additional $1.00 per hours.";
				cout<<"\nCharges: ";
				if(hours<20*28)
				{
					cout<<"$14.95\n\n\n";
				}
				else
				{
					cout<<"$"<<14.95+(hours-20*28)*1.00<<"\n";
				
					if((14.95+(hours-20*28)*1.00) - (19.95)>0)
					{
						cout<<"\nIf you select Package C:";
						cout<<" You may save $"<< (14.95+(hours-20*28)*1.00) - (19.95);
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
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11 )
	{
		cout<<"Enter how many hours were used: ";
		cin>>hours;
		while(hours>720)
		{
			cout<<"\nError MSG!\nHours must be less the or equal to 720.\nPlease Enter Again: ";
			cin>>hours;
		}

		switch(choice)
		{
			case 'A':
				cout<<"\n\nPackage A:";
				cout<<"\nHours Used: "<<hours;
				cout<<"\nCharges: $9.95 per month with 10 hours of access and additional $2.00 per hours.";
				cout<<"\nCharges: ";
				if(hours<10*30)
				{
					cout<<"$9.95\n\n\n";
				}
				else
				{
					cout<<"$"<<9.95+(hours-10*30)*2.00;
					if(hours<20*30)
					{
						cout<<"\n\nIf you select Package B:";
						cout<<" You may save $"<< (9.95+(hours-10*30)*2.00) - (14.95);
						cout<<"\n";
					}
					else
					{
						cout<<"\nIf you select Package B:";
						cout<<" You may save $"<< (9.95+(hours-10*30)*2.00) - (14.95+(hours-20*30)*1.00);
						cout<<"\n";
					}

					if( (9.95+(hours-10*30)*2.0)-(19.95) >= 0)
					{
						cout<<"\n\nIf you select Package c:";
						cout<<" You may save $"<< (9.95+(hours-10*30)*2.00) - (19.95);
						cout<<"\n\n";
					}
				}
				break;

			case 'B':
				cout<<"\n\nPackage B:";
				cout<<"\nHours Used: "<<hours;
				cout<<"\nCharges: $14.95 per month with 20 hours of access and additional $1.00 per hours.";
				cout<<"\nCharges: ";
				if(hours<20*30)
				{
					cout<<"$14.95\n\n\n";
				}
				else
				{
					cout<<"$"<<14.95+(hours-20*30)*1.00<<"\n";
				
					if((14.95+(hours-20*30)*1.00) - (19.95)>0)
					{
						cout<<"\nIf you select Package C:";
						cout<<" You may save $"<< (14.95+(hours-20*30)*1.00) - (19.95);
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
	}
	else
	{
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
	}

	return 0;
}
