//	26. Using Files—Savings Account Balance Modiﬁcation

/*	Modify the Savings Account Balance program described in Programming Challenge
	16 so that it writes the ﬁnal report to a ﬁle. After the program runs, print the ﬁle to
	hand in to your instructor.
*/

/*
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	double interest_rate, starting_balance, total_interest=0.0, interest=0.0, amount_deposit=0.0, amount_withdraw=0.0, input_amount;
	int months;

	ofstream fout; // File for output
	fout.open("Problem_05-26.txt");

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
			fout<<"Info: Your Account is Blocked due to Negative Balance.";
			break;
		}

		interest = starting_balance * (interest_rate/12);
		total_interest += interest;
		starting_balance += interest;
	}

	// Open File to save data
	fout<<"\n\nEnding Balance: "<<starting_balance;
	fout<<"\nTotal Deposited Amount: "<<amount_deposit;
	fout<<"\nTotal Amount Withdrawal: "<<amount_withdraw;
	fout<<"\nTotal Interest Earned: "<<total_interest<<"\n\n ";

	fout.close();

	return 0;
}
*/