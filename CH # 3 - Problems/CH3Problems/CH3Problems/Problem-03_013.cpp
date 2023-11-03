// Problem 013: Property Tax
// A county collects property taxes on the assessment value of property, which is 60 percent
// of the property�s actual value. If an acre of land is valued at $10,000, its assessment
// value is $6,000. The property tax is then 64� for each $100 of the assessment value. The
// tax for the acre assessed at $6,000 will be $38.40. Write a program that asks for the
// actual value of a piece of property and displays the assessment value and property tax.


#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	// const Declaration
	const double assessmentRate = 0.60,
	pTAX = 0.64; // 64 cents is equal to $ 0.64  

	// Variable declaration
	double pValue, assessmentValue, pTax;
	
	// take Input
	cout<<"Enter The Amount Of Property: ";
	cin>>pValue;

	// Calculation
	assessmentValue = pValue * assessmentRate;
	pTax = ( assessmentValue / 100 ) * pTAX;

	// Show Output
	cout<<setprecision(2)<<fixed<<showpoint;
	cout<<"\n\nProperty Value: $"<< pValue;
	cout<<"\nAssessment Value: $"<<assessmentValue;
	cout<<"\nProperty Tax: $"<<pTax;
	cout<<"\n\n";
	
	return 0;
}
