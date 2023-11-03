// Problem 09: Automobile Costs
// Write a program that asks the user to enter the monthly costs for the following
// expenses incurred from operating his or her automobile: loan payment, insurance,
// gas, oil, tires, and maintenance. The program should then display the total monthly
// cost of these expenses, and the total annual cost of these expenses.


#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	// variable declaration
	double loanPayment,
		insurance,
		Gas,
		Oil,
		Tires,
		Maintenance,
		total;

	// take input
	cout<<"Enter amount Of Monthly Loan Payment: ";
	cin>>loanPayment;
	
	cout<<"Enter Amount Of Monthly Insurance: ";
	cin>>insurance;

	cout<<"Enter Monthly Gas Charges: ";
	cin>>Gas;

	cout<<"Enter Monthly Oil Charges: ";
	cin>>Oil;

	cout<<"Enter Monthly Tires Charges: ";
	cin>>Tires;
	
	cout<<"Enter Monthly Maintenance Charges: ";
	cin>>Maintenance;

	// calculation
	total = loanPayment + insurance + Gas + Oil + Tires + Maintenance;

	// show Output
	cout<<setprecision(2)<<fixed<<showpoint;
	cout<<"\n\n";
	cout<<"\t Expenses\t Amount\n";
	cout<<"\t --------\t ------\n";
	cout<<"\tLoan Payment \t "<<loanPayment<<"\n";
	cout<<"\tInsurance    \t "<<insurance<<"\n";
	cout<<"\tGas Charges  \t "<<Gas<<"\n";
	cout<<"\tOil Charges  \t "<<Oil<<"\n";
	cout<<"\tTires Charges\t "<<Tires<<"\n";
	cout<<"\tMaintenance  \t "<<Maintenance<<"\n";
	cout<<"\t-------------\t ------\n";
	cout<<"\tTotal Charges\t "<<total<<"\n";
	cout<<"\t-------------\t ------"<<"\n\n";
	cout<<"\tAnnually Charges\t"<<total * 12<<"\n\n\n";

	return 0;
}
