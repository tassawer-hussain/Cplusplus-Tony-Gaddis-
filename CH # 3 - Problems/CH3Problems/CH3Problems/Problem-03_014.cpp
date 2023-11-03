// Problem 014: Senior Citizen Property Tax
// Madison County provides a $5,000 homeowner exemption for its senior citizens.
// For example, if a senior�s house is valued at $158,000 its assessed value would be
// $94,800, as explained above. However, he would only pay tax on $89,800. At last
// year�s tax rate of $2.64 for each $100 of assessed value, the property tax would be
// $2,370.72. In addition to the tax break, senior citizens are allowed to pay their property
// tax in four equal payments. The quarterly payment due on this property would
// be $592.68. Write a program that asks the user to input the actual value of a piece of
// property and the current tax rate for each $100 of assessed value. The program
// should then calculate and report how much annual property tax a senior homeowner
// will be charged for this property and what the quarterly tax bill will be.


#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	// const Declaration
	const double exemption = 5000,
		assessmentRATE = 0.60,
		taxRate = 2.64;

	// Variable declaration
	double pValue, assessmentValue, pTax;
	
	// take Input
	cout<<"Enter The Amount Of Property: ";
	cin>>pValue;

	// Calculation
	assessmentValue = (pValue * assessmentRATE) - exemption;
	pTax = ( assessmentValue / 100 ) * taxRate;

	// Show Output
	cout << setprecision(2) << fixed << showpoint;
	cout<<"\n\nProperty Value: $"<< pValue;
	cout<<"\nAssessment Value: $"<<assessmentValue;
	cout<<"\nProperty Tax: $"<<pTax;
	cout<<"\nQuarterly Tax Bill: $S"<<pTax/4.0;
	cout<<"\n\n";
	
	return 0;
}
