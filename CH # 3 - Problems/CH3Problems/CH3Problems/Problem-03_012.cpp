// Problem 012: Monthly Sales Tax
// A retail company must file a monthly sales tax report listing the sales for the month
// and the amount of sales tax collected. Write a program that asks for the month, the
// year, and the total amount collected at the cash register (that is, sales plus sales tax).
// Assume the state sales tax is 4 percent and the county sales tax is 2 percent.
// If the total amount collected is known and the total sales tax is 6 percent, the amount
// of product sales may be calculated as:

// S = T / 1.06

// S is the product sales and T is the total income (product sales plus sales tax).
// The program should display a report similar to
// Month: October
// --------------------
// Total Collected: $ 26572.89
// Sales: $ 25068.76
// County Sales Tax: $ 501.38
// State Sales Tax: $ 1002.75
// Total Sales Tax: $ 1504.13


#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	// const Declaration
	const double SSTax = 0.04,
		CSTax = 0.02;

	// variablwe declaration
	double year, amount, sale, csTax, ssTax, tsTax;
	char month[15];

	// take Input
	cout<<"Enter Year: ";
	cin>>year;

	cout<<"Enter Month: ";
	cin>>month;

	cout<<"Enter Total Collectd Cash Including Tax: ";
	cin>>amount;

	// calculation
	sale = amount / 1.06;
	ssTax = sale * SSTax;
	csTax = sale * CSTax;
	tsTax = ssTax + csTax;

	// show Output
	cout<<setprecision(2)<<fixed<<showpoint;
	cout<<"\n\nYear: "<<year; 
	cout<<" Month: "<<month<<"\n";
	cout<<"--------------------\n";
	cout<<"Total Collected: $"<<amount<<"\n";
	cout<<"Sales: $"<<sale<<"\n";
	cout<<"County Sales Tax: $ "<<csTax<<"\n";
	cout<<"State Sales Tax: $ "<<ssTax<<"\n";
	cout<<"Total Sales Tax: $ "<<tsTax<<"\n";

	return 0;
}
