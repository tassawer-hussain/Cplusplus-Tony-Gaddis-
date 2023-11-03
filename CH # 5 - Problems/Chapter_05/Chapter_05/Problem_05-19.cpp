// 19. Budget Analysis

/*	Write a program that asks the user to enter the amount that he or she has budgeted
	for a month. A loop should then prompt the user to enter each of his or her expenses
	for the month, and keep a running total. When the loop ﬁnishes, the program should	
	display the amount that the user is over or under budget.
*/


#include <iostream>
using namespace std;

int main() {
	double budget, running_total=0.0, expense;

	cout<<"Enter your Monthly Budget: ";
	cin>>budget;

	cout<<"Enter your expense one by one and enter -999 when expense ended: ";
	cin>>expense;

	while(expense != -999) {
		running_total += expense;
		cout<<"Enter another expense: ";
		cin>>expense;
	}

	cout<<"\n\nYour Budget: "<<budget;
	cout<<"\nYour Total Expense: "<<running_total;

	expense = budget - running_total;
	if(expense<0) {
		cout<<"\n\nYou\'re Over Budget with "<<expense<<endl;
	}
	else {
		cout<<"\n\nYou\'re Under Budget with "<<expense<<endl;
	}
	return 0;
}
