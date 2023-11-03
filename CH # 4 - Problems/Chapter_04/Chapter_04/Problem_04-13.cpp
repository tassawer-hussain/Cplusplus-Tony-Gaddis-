/*
	13. Shipping Charges
	The Fast Freight Shipping Company charges the following rates:
	
	Weight of Package (in Kilograms)				 Rate per 500 Miles Shipped
		2 Kg or less											$1.10
		Over 2 Kg but not more than 6 kg						$2.20
		Over 6 Kg but not more than 10 kg						$3.70
		Over 10 Kg but not more than 20 kg						$4.80

	Write a program that asks for the weight of the package and the distance it is to be
	shipped, and then displays the charges.

	Input Validation: Do not accept values of 0 or less for the weight of the package. Do
	not accept weights of more than 20 Kg (this is the maximum weight the company will
	ship). Do not accept distances of less than 10 miles or more than 3,000 miles. These
	are the company�s minimum and maximum shipping distances.
*/


#include <iostream>
using namespace std;

int main()
{
	double weight, distance, charges;

	cout<<"Enter the weights of the Package: ";
	cin>>weight;

	while(weight<=0 || weight>20)
	{
		if(weight<=0)
		{
			cout<<"Error MSG!\nWeight of package must be greater than 0.\nEnter weight of package again: ";
			cin>>weight;
		}
		else
		{
			cout<<"Error MSG!\nMaximum Weight of package must be 20.\nEnter weight of package again: ";
			cin>>weight;
		}
	}

	cout<<"Enter the Distance to be shipped Package: ";
	cin>>distance;

	while(distance<10 || distance>3000)
	{
		if(distance<10)
		{
			cout<<"Error MSG!\nMinimum Distance must be 10.\nEnter Distance again: ";
			cin>>distance;
		}
		else
		{
			cout<<"Error MSG!\nMaximum Distance must be 3000.\nEnter Distance again: ";
			cin>>distance;
		}
	}

	if(weight<=2)
	{
		charges = (distance/500.0) * 1.10;  
	}
	else if(weight>2 && weight<=6)
	{
		charges = (distance/500.0) * 2.20;  
	}
	else if(weight>6 && weight<=10)
	{
		charges = (distance/500.0) * 3.70;  
	}
	else
	{
		charges = (distance/500.0) * 4.80;  
	}

	cout<<"\n\nWeight: "<<weight;
	cout<<"\nDistance: "<<distance;
	cout<<"\nCharges: $"<<charges;
	cout<<"\n\n";

	return 0;
}
