//	By: Tassawer Hussain < th.tassawer@gmail.com >
//	Time: 01:00 AM
//	Date: 10/10/2014


//	Problem 002
//	Sales Prediction
//	The East Coast sales division of a company generates 62 percent of total sales.
//	Based on that percentage, write a program that will predict how much the East Coast division
//	will generate if the company has $4.6 million in sales this year.

#include<iostream>

using namespace std;

int main() {
    int percentAge = 62;
    int sale = 4600000; // 4.6 * 1000000 ( 1 Million = 10 lac)

    int shareOfEastCoast;

    shareOfEastCoast = (percentAge * sale) / 100;

    // output

    cout << " Total Sale: " << sale << " i.e $ " << (sale / 1000000.0) << " Million" << endl;
    cout << " East Coast Division Percentage: " << percentAge << " % \n";
    cout << " East Coast Division Generate: $ " << shareOfEastCoast << endl;

    return 0;
}