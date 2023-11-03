// Problem 011: Currency
// Write a program that will convert U.S. dollar amounts to Japanese Yen and to Euros.
// To get the most up-to-date exchange rates, search the Internet using the term �currency
// exchange rate�. If you cannot find the most recent exchange rates, use the
// following:
// 1 Dollar = 113.22 Yen
// 1 Dollar = 0.6936 Euros
// Format your currency amounts in fixed-point notation, with two decimal places of
// precision, and be sure the decimal point is always displayed.


#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	// const Declaration
	const double us2yen =113.22,
		us2euros = 0.6936;

	// variable declaration
	double amount;

	// take input
	cout<<"Enter Amount In US $: ";
	cin>>amount;

	// show output with calculations
	cout<<setprecision(2)<<fixed<<showpoint;
	cout<<"\n\nAmount In U.S. Dollar: $"<<amount<<"\n";
	cout<<"Amount In  Japanese Yen: "<<amount * us2yen <<" Yen\n";
	cout<<"Amount In Euros: "<<amount * us2euros <<" Euros\n\n\n";
	return 0;
}
