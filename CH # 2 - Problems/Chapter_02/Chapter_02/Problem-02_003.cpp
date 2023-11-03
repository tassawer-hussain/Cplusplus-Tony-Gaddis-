//	By: Tassawer Hussain < th.tassawer@gmail.com >
//	Time: 01:14 AM
//	Date: 10/10/2014


//	Problem 003
//	Sales Tax
//	Write a program that will compute the total sales tax on a $52 purchase. Assume the
//	state sales tax is 4 percent and the county sales tax is 2 percent.

#include<iostream>

using namespace std;

int main() {
    double stateSaleTax = 0.04;
    double countrySaleTax = 0.02;
    int price = 52;

    // Calculation
    stateSaleTax *= price;
    countrySaleTax *= price;

    // output
    cout << " Purchase Price: " << price << endl;
    cout << " State Sale Tax: " << stateSaleTax << endl;
    cout << " Country Sale Tax: " << countrySaleTax << endl;
    cout << " Total Tax: " << stateSaleTax + countrySaleTax << endl;
    cout << " Purchase Price (for customer): " << price + stateSaleTax + countrySaleTax << endl;

    return 0;
}
