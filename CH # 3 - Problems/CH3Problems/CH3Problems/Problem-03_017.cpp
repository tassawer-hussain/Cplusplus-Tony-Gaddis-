// Problem 017: Monthly Payments
// The monthly payment on a loan may be calculated by the following formula:

// Payment = Rate * (1 + Rate) ^ N * L / ( (1 + Rate) ^ N � 1) )

// Rate is the monthly interest rate, which is the annual interest rate divided by 12.
// (12% annual interest would be 1 percent monthly interest.) N is the number of payments
// and L is the amount of the loan. Write a program that asks for these values and
// displays a report similar to
// Loan Amount: $ 10000.00
// Monthly Interest Rate: 1%
// Number of Payments: 36
// Monthly Payment: $ 332.14
// Amount Paid Back: $ 11957.15
// Interest Paid: $ 1957.15


#include <iomanip> // for output manipulation
#include <cmath> // for pow function
#include <iostream>
using namespace std;

int main()
{
	// variable Declaration
	int noOfPayment;
	double iRateAnnual, iRateMonthally, loan, interest, totalAmount, monthlyPayment;

	// Take Input
	cout<<"Enter Loan Amount: ";
	cin>>loan;

	cout<<"Enter Interest Rate: ";
	cin>>iRateAnnual;
	iRateMonthally = iRateAnnual / 12.0;

	cout<<"Enter the Number Of Payments: ";
	cin>>noOfPayment;


	// Calculation
	// Payment = Rate * (1 + Rate) ^ N * L / ( (1 + Rate) ^ N � 1) )
	double factor = pow((1+(iRateMonthally/100.0)), noOfPayment);
	monthlyPayment = ( (iRateMonthally/100.0) * factor * loan) / ( factor -1 );
	totalAmount = monthlyPayment * noOfPayment;
	interest = totalAmount - loan;

	// Show Output
	cout<<setprecision(2)<<fixed<<showpoint;
	cout<<"\n\n\nLoan Amount: $"<<loan;
	cout<<"\nMonthly Interest Rate: "<<iRateMonthally;
	cout<<"%\nNumber of Payments: "<<noOfPayment;
	cout<<"\nMonthly Payment: $ "<<monthlyPayment;
	cout<<"\nAmount Paid Back: $"<<totalAmount;
	cout<<"\nInterest Paid: $"<<interest;
	cout<<"\n\n";

	return 0;
}
