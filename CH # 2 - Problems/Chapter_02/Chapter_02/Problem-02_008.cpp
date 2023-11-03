//	By: Tassawer Hussain < th.tassawer@gmail.com >
//	Time: 08:49 PM
//	Date: 31/10/2014

//  Problem 008.
//  Total Purchase
//  A customer in a store is purchasing five items. The prices of the five items are:
//  Price of item 1 = $12.95
//  Price of item 2 = $24.95
//  Price of item 3 = $6.95
//  Price of item 4 = $14.95
//  Price of item 5 = $3.95
//  Write a program that holds the prices of the five items in five variables. Display each
//  item�s price, the subtotal of the sale, the amount of sales tax, and the total. Assume
//  the sales tax is 6%.

#include<iostream>

using namespace std;

int main() {
    const double item1 = 12.95,
        item2 = 24.95,
        item3 = 6.95,
        item4 = 14.95,
        item5 = 3.95,
        taxRate = 0.06; //   TaxRate = 6 %

    double sum, tax, totalBill;

    sum = item1 + item2 + item3 + item4 + item5;
    tax = sum * taxRate;
    totalBill = sum + tax;

    cout << " Price Of Item1: $" << item1 << endl;
    cout << " Price Of Item2: $" << item2 << endl;
    cout << " Price Of Item3: $" << item3 << endl;
    cout << " Price Of Item4: $" << item4 << endl;
    cout << " Price Of Item5: $" << item5 << endl;
    cout << endl;
    cout << " Total Price: $" << sum << endl;
    cout << " Tax on Items: $" << tax << endl;
    cout << " Total Bill with Tax: $" << totalBill << endl;

    return 0;
}
