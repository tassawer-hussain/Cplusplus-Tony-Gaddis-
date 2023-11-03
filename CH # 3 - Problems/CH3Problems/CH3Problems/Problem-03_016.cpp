// Problem 016: Interest Earned
// Assuming there are no deposits other than the original investment, the balance in a
// savings account after one year may be calculated as

// Amount = Principal * (1 + Rate / T) ^ T

// Principal is the balance in the savings account, Rate is the interest rate, and T is the
// number of times the interest is compounded during a year (T is 4 if the interest is compounded
// quarterly).
// Write a program that asks for the principal, the interest rate, and the number of times
// the interest is compounded. It should display a report similar to
// Interest Rate: 4.25%
// Times Compounded: 12
// Principal: $ 1000.00
// Interest: $ 43.34
// Amount in Savings: $ 1043.34


#include <iomanip> // for output manipulation
#include <cmath> // for pow function
#include <iostream>
using namespace std;

int main()
{
	int time;
	double principal, iRate, interest, totalAmount;

	cout<<"Enter Principal Amount: ";
	cin>>principal;

	cout<<"Enter Interest Rate: ";
	cin>>iRate;

	cout<<"Enter the Number Of Times the Interest is Compounded During A year: ";
	cin>>time;

	totalAmount = principal * pow( ( 1 + ( (iRate/100) /time ) ) , time);
	interest = totalAmount - principal;

	cout<<setprecision(2)<<fixed<<showpoint;
	cout<<"\n\n\nInterest Rate: "<<iRate;
	cout<<"\nTimes Compounded: "<<time;
	cout<<"\nPrincipal: $"<<principal;
	cout<<"\nInterest: $"<<interest;
	cout<<"\nAmount in Savings: $"<<totalAmount;
	cout<<"\n\n";

	return 0;
}
