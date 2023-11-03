/*
	10. Software Sales
	A software company sells a package that retails for $99. Quantity discounts are given
	according to the following table.

	Quantity			Discount
	10�19				20%
	20�49				30%
	50�99				40%
	100 or more			50%

	Write a program that asks for the number of units sold and computes the total cost of the purchase.
	Input Validation: Make sure the number of units is greater than 0.
*/


#include <iostream>
using namespace std;

int main()
{
	const int PRICE = 99;

	int quantity;
	cout<<"Enter number of package sold: ";
	cin>>quantity;

	while(quantity<1)
	{
		cout<<"Error MSG:\n Quantity Must be Greather than Zero.\nEnter a number greather than 0.\n";
		cin>>quantity;
	}

	if(quantity<10)
	{
		cout<<"\nNo Discount allowed!";
		cout<<"\nNo Of Packages Sold: "<<quantity;
		cout<<"\nPrice: "<<quantity * PRICE;
		cout<<endl<<endl;
	}
	else if(quantity>=10 && quantity<20)
	{
		cout<<"\nDiscount allowed!";
		cout<<"\nNo Of Packages Sold: "<<quantity;
		int discount = PRICE * quantity * 0.2;
		cout<<"\nDiscount: "<<discount;
		cout<<"\nPrice: "<<(quantity * PRICE) - discount;
		cout<<endl<<endl;
	}
	else if(quantity>=20 && quantity<50)
	{
		cout<<"\nDiscount allowed!";
		cout<<"\nNo Of Packages Sold: "<<quantity;
		int discount = PRICE * quantity * 0.3;
		cout<<"\nDiscount: "<<discount;
		cout<<"\nPrice: "<<(quantity * PRICE) - discount;
		cout<<endl<<endl;
	}
	else if(quantity>=50 && quantity<100)
	{
		cout<<"\nDiscount allowed!";
		cout<<"\nNo Of Packages Sold: "<<quantity;
		int discount = PRICE * quantity * 0.4;
		cout<<"\nDiscount: "<<discount;
		cout<<"\nPrice: "<<(quantity * PRICE) - discount;
		cout<<endl<<endl;
	}
	else
	{
		cout<<"\nDiscount allowed!";
		cout<<"\nNo Of Packages Sold: "<<quantity;
		int discount = PRICE * quantity * 0.5;
		cout<<"\nDiscount: "<<discount;
		cout<<"\nPrice: "<<(quantity * PRICE) - discount;
		cout<<endl<<endl;
	}
	return 0;
}
