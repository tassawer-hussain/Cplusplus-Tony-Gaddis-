// 16. Savings Account Balance

/*	Write a program that calculates the balance of a savings account at the end of a period
	of time. It should ask the user for the annual interest rate, the starting balance, and
	the number of months that have passed since the account was established. A loop
	should then iterate once for every month, performing the following:

	A) Ask the user for the amount deposited into the account during the month. (Do not
	accept negative numbers.) This amount should be added to the balance.

	B) Ask the user for the amount withdrawn from the account during the month. (Do
	not accept negative numbers.) This amount should be subtracted from the balance.

	C) Calculate the monthly interest. The monthly interest rate is the annual interest rate
	divided by twelve. Multiply the monthly interest rate by the balance, and add the
	result to the balance.

	After the last iteration, the program should display the ending balance, the total
	amount of deposits, the total amount of withdrawals, and the total interest earned.

	NOTE: If a negative balance is calculated at any point, a message should be displayed
	indicating the account has been closed and the loop should terminate.
*/


#include <iostream>
using namespace std;

int main() {
	double interest_rate, starting_balance, total_interest=0.0, interest=0.0, amount_deposit=0.0, amount_withdraw=0.0, input_amount;
	int months;

	cout<<"Enter Interest Rate: ";
	cin>>interest_rate;
	while(interest_rate<0) {
		cout<<"Invalid Interest Rate. Enter Again: ";
		cin>>interest_rate;
	}
	interest_rate /= 100.0; // change interest rate into fraction i.e 5 % = 0.05

	cout<<"Enter Starting Balance: ";
	cin>>starting_balance;
	while(starting_balance<0) {
		cout<<"Invalid Starting Balance. Enter Positive Starting Balance: ";
		cin>>starting_balance;
	}

	cout<<"Enter Months for Accounts: ";
	cin>>months;
	while(months<1) {
		cout<<"Invalid Months. Enter Again: ";
		cin>>months;
	}

	for(int i = 0; i<months ; i++) {
		cout<<"Enter deposit Amount for Month "<<i+1<<": ";
		cin>>input_amount;
		while(input_amount<0) {
			cout<<"Invalid Amount. Enter Again: ";
			cin>>input_amount;
		}
		amount_deposit += input_amount;
		starting_balance += input_amount;

		cout<<"Enter Withdrawal Amount for Month "<<i+1<<": ";
		cin>>input_amount;
		while(input_amount<0) {
			cout<<"Invalid Amount. Enter Again: ";
			cin>>input_amount;
		}
		amount_withdraw += input_amount;
		starting_balance -= input_amount;

		if (starting_balance<0) {
			cout<<"Info: Your Account is Blocked due to Negative Balance.";
			break;
		}

		interest = starting_balance * (interest_rate/12);
		total_interest += interest;
		starting_balance += interest;
	}


	cout<<"\n\nEnding Balance: "<<starting_balance;
	cout<<"\nTotal Deposited Amount: "<<amount_deposit;
	cout<<"\nTotal Amount Withdrawal: "<<amount_withdraw;
	cout<<"\nTotal Interest Earned: "<<total_interest<<"\n\n ";

	return 0;
}
