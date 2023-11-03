//	10. Payroll

/*	Write a program that uses the following arrays:

	• empId: an array of seven long integers to hold employee identification numbers.
		The array should be initialized with the following numbers:
		5658845   4520125   7895122   8777541	8451277   1302850   7580489
	• hours: an array of seven integers to hold the number of hours worked by each employee
	• payRate: an array of seven doubles to hold each employee’s hourly pay rate
	• wages: an array of seven doubles to hold each employee’s gross wages

	The program should relate the data in each array through the subscripts. For example, the number in element 0 of
	the hours array should be the number of hours worked by the employee whose identiﬁcation number is stored in
	element 0 of the empId array. That same employee’s pay rate should be stored in element 0 of the payRate array.
	
	The program should display each employee number and ask the user to enter that employee’s hours and pay rate.
	It should then calculate the gross wages for that employee (hours times pay rate) and store them in the
	wages array. After the data has been entered for all the employees, the program should display each employee’s identiﬁcation
	number and gross wages.

	Input Validation: Do not accept negative values for hours or numbers less than 6.00 for pay rate.
*/


#include <iostream>
using namespace std;

int main() {
	long empID[7] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
	int hours[7];
	double payRate[7], wages[7];

	for(int i=0; i<7; i++) {
		cout<<"Enter the working hours of Employee ID "<<empID[i]<<": ";
		cin>>hours[i];
		while(hours[i]<0) {
			cout<<"ERROR: Hourse Cannot be negative. Enter Again: ";
			cin>>hours[i];
		}

		cout<<"Enter the Pay Rate of Employee ID "<<empID[i]<<": ";
		cin>>payRate[i];
		while(payRate[i]<6.0) {
			cout<<"ERROR: Pay Rate Cannot be less than 6.0. Enter Again: ";
			cin>>payRate[i];
		}

		wages[i] = hours[i] * payRate[i];
	}

	cout<<"\n\n  Emp_ID\t\tWages\n";
	for(int i=0; i<7; i++) {
		cout<<empID[i]<<"\t\t\t"<<wages[i]<<"\n";
	}

	cout<<"\n\n";
	return 0;
}
