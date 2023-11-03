//	By: Tassawer Hussain < th.tassawer@gmail.com >
//	Time: 08:26 PM
//	Date: 31/10/2014


//  Problem 006.
//  Annual Pay
//  Suppose an employee gets paid every two weeks and earns $1700.00 each pay period. In a
//  year the employee gets paid 26 times. Write a program that defines the following variables:
//  payAmount		This variable will hold the amount of pay the employee earns each pay
//					period. Initialize the variable with 1700.0.
//  payPeriods		This variable will hold the number of pay periods in a year. Initialize the
//					variable with 26.
//  annualPay		This variable will hold the employee�s total annual pay, which will be calculated.
//  The program should calculate the employee�s total annual pay by multiplying the
//  employee�s pay amount by the number of pay periods in a year, and store the result in
//  the annualPay variable. Display the total annual pay on the screen.

#include<iostream>

using namespace std;

int main() {
    const double payAmount = 1700.00;
    const int payPeriods = 26;
    double annualPay;

    annualPay = payAmount * payPeriods;

    cout << " Payment After 2 Weeks: $" << payAmount << endl;
    cout << " No. of Pay Periods in A Year: " << payPeriods << " Times" << endl;
    cout << " Annual Pay: $" << annualPay << endl;

    return 0;
}
