//	12. Days Out

/*	Write a program that calculates the average number of days a company�s employees
	are absent. The program should have the following functions:
	
	� A function called by main that asks the user for the number of employees in the 
	company. This value should be returned as an int. (The function accepts no arguments.)

	� A function called by main that accepts one argument: the number of employees in
	the company. The function should ask the user to enter the number of days each
	employee missed during the past year. The total of these days should be returned as an int.
	
	� A function called by main that takes two arguments: the number of employees in the company
	and the total number of days absent for all employees during the year. The function should return, as a double,
	the average number of days absent. (This function does not perform screen output and does not ask the user for input.)

	Input Validation: Do not accept a number less than 1 for the number of employees.
	Do not accept a negative number for the days any employee missed.
*/


#include <iostream>
using namespace std;

// Function Prototype
int getEmployee();
int daysEachEmpAbsent(const int);
double avgAbsent(const int, const int);


int main() {
	int total_emp, total_absent;
	
	total_emp = getEmployee();
	total_absent = daysEachEmpAbsent(total_emp);

	cout<<"\n\n\nTotal Employee: "<<total_emp;
	cout<<"\nTotal Absents: "<<total_absent;
	cout<<"\nAverage Absents: "<<avgAbsent(total_emp, total_absent);

	cout<<"\n\n";
	return 0;
}

int getEmployee() {
	int emp;
	cout<<"Enter total number of Employee in your Company: ";
	cin>>emp;
	while(emp<1) {
		cout<<"Invalid Employee. Please enter again more then 0: ";
		cin>>emp;
	}
	return emp;
}

int daysEachEmpAbsent(const int e) { 
	int total = 0;
	int input;
	for (int i=0; i<e; i++) {
		cout<<"Enter Absent of Employee "<<i+1<<": ";
		cin>>input;
		while(input<0) {
			cout<<"Absent cannot be less than 0: Enter again:";
			cin>>input;
		}
		total += input;
	}
	return total;
}

double avgAbsent(const int e, const int t) {
	return t/static_cast<double>(e);
}
