//	By: Tassawer Hussain < th.tassawer@gmail.com >
//	Time: 07:34 PM
//	Date: 31/10/2014


//  Problem 004.
//  Restaurant Bill
//  Write a program that computes the tax and tip on a restaurant bill for a patron with a
//  $44.50 meal charge. The tax should be 6.75 percent of the meal cost.
//  The tip should be 15 percent of the total after adding the tax.
//  Display the meal cost, tax amount, tip amount, and total bill on the screen.

#include <iostream>

using namespace std;

int main() {
    const double mealcost = 44.50;
    const double taxrate = 0.0675; //  taxrate = 6.75%
    const double tiprate = 0.15; // tiprate = 15;

    // variable define
    double tax, tip, bill;

    // calculation
    tax = mealcost * taxrate;
    tip = (mealcost + tax) * tiprate;
    bill = mealcost + tax + tip;

    // cout info
    cout << " meal cost: " << mealcost << endl;
    cout << " tax on meal: " << tax << endl;
    cout << " tip: " << tip << endl;
    cout << " total bill: " << bill << endl;

    return 0;
}
