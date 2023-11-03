// 15. Payroll Report

/*  Write a program that displays a weekly payroll report. A loop in the program should
    ask the user for the employee number, gross pay, state tax, federal tax, and FICA
	withholdings. The loop will terminate when 0 is entered for the employee number.
	After the data is entered, the program should display totals for gross pay, state tax,
	federal tax, FICA withholdings, and net pay.
	Input Validation: Do not accept negative numbers for any of the items entered. Do not
	accept values for state, federal, or FICA withholdings that are greater than the gross pay.
	If the sum state tax + federal tax + FICA withholdings for any employee is greater than
	gross pay, print an error message and ask the user to re-enter the data for that employee.
*/


#include <iostream>
using namespace std;

int main() {
	int emp_no;
	double gross_pay, state_tax, federal_tax, fica_withholding, total_taxes;

	do {
		cout<<"Enter Employee Number: ";
		cin>>emp_no;
		if (emp_no == 0)
			return 0;
		while(emp_no < 0) {
			cout<<"Invalid Employee Number. Please Enter Again: ";
			cin>>emp_no;
		}
		cout<<"Enter Gross Pay: ";
		cin>>gross_pay;
		while(gross_pay < 0) {
			cout<<"Invalid Gross Pay. Please Enter Again: ";
			cin>>gross_pay;
		}

		cout<<"State Tax: ";
		cin>>state_tax;
		while(state_tax<0 || state_tax>gross_pay) {
			cout<<"Invalid State Tax. Please Enter Again: ";
			cin>>state_tax;
		}

		cout<<"Enter Federal Tax: ";
		cin>>federal_tax;
		while(federal_tax<0 || federal_tax>gross_pay){
			cout<<"Invalid Federal Tax. Please Enter Again: ";
			cin>>federal_tax;
		}

		cout<<"Enter FICA Withholdings: ";
		cin>>fica_withholding;
		while(fica_withholding<0 || fica_withholding>gross_pay) {
			cout<<"Invalid FICA Withholdings. Please Enter Again: ";
			cin>>fica_withholding;
		}

		total_taxes = state_tax+federal_tax+fica_withholding;
		while(total_taxes>gross_pay) {
			cout<<"ERROR: Total taxes cannot be greater then gross pay.";
			cout<<"Please enter again state_tax, federal_tax and fica_withholdings for employee no "<<emp_no;
			cin>>state_tax>>federal_tax>>fica_withholding;

			while(federal_tax<0 || federal_tax>gross_pay){
				cout<<"Invalid Federal Tax. Please Enter Again: ";
				cin>>federal_tax;
			}
			while(state_tax<0 || state_tax>gross_pay) {
				cout<<"Invalid State Tax. Please Enter Again: ";
				cin>>state_tax;
			}
			while(federal_tax<0 || federal_tax>gross_pay){
				cout<<"Invalid Federal Tax. Please Enter Again: ";
				cin>>federal_tax;
			}

			total_taxes = state_tax+federal_tax+fica_withholding;
		}
		cout<<"\n\n*****************************";
		cout<<"\n**         Report         **";
		cout<<"\n*****************************";
		cout<<"\nEmployee # "<<emp_no<<"\n";
		cout<<"State Tax: "<<state_tax<<"\n";
		cout<<"Federal Tax: "<<federal_tax<<"\n";
		cout<<"FICA Witholdding: "<<fica_withholding<<"\n";
		cout<<"Total Taxes: "<<total_taxes<<"\n";
		cout<<"Gross Pay: "<<gross_pay<<"\n";
		cout<<"Net Pay: "<<gross_pay-total_taxes<<"\n";
	
	}while(emp_no != 0);
	return 0;
}
