//	9. Present Value

/*	Suppose you want to deposit a certain amount of money into a savings account, and
	then leave it alone to draw interest for the next 10 years. At the end of 10 years you
	would like to have $10,000 in the account. How much do you need to deposit today
	to make that happen? You can use the following formula, which is known as the present value formula, to ﬁnd out:
		P = F / (1 + r) whole power n
	
	The terms in the formula are as follows:
	• P is the present value, or the amount that you need to deposit today. 
	• F is the future value that you want in the account. (In this case, F is $10,000.)
	• r is the annual interest rate.
	• n is the number of years that you plan to let the money sit in the account.
	
	Write a program that has a function named presentValue that performs this calculation.
	The function should accept the future value, annual interest rate, and number of years
	as arguments. It should return the present value, which is the amount that you need to deposit today.
	Demonstrate the function in a program that lets the user experiment with different values for the formula's terms.
*/


#include <iostream>
#include <cmath> // For pow function
using namespace std;

// Function Prototype
double presentValue(const double &, const double &, const double &);

int main() {
	double future_value, interest_rate, years;
	
	cout<<"Enter How much you want to have in Future: ";
	cin>>future_value;
	cout<<"Enter Interest Rate that Bank is offering to you: ";
	cin>>interest_rate;
	interest_rate /= 100.0; // convert 5% to 0.05
	cout<<"Enter the years for which you want to deposit amount: ";
	cin>>years;

	cout<<"\nYou Must deposit: $ "<<presentValue(future_value, interest_rate,years);
	cout<<"\n\n";

	return 0;
} 

double presentValue(const double & f, const double & r, const double & n) {
	return f / pow((1+r), n);
}
