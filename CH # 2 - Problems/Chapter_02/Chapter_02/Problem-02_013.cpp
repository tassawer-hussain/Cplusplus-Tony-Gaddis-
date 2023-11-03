//	By: Tassawer Hussain < th.tassawer@gmail.com >
//	Time: 08:57 AM
//	Date: 01/11/2014

//  Problem 013.
//  Circuit Board Price
//  An electronics company sells circuit boards at a 40 percent profit. 
//  Write a program that will calculate the selling price of a circuit board 
//  that costs $12.67. Display the result on the screen.


#include <iostream>

using namespace std;

int main() {
    const double costs = 12.67, // costs 12.67 $
        profit = 0.4; // 40 %

    double sellingPrice, profitAmount;

    profitAmount = costs * profit;
    sellingPrice = costs + profitAmount;

    cout << " Costs of the Circuit Board: " << costs << " $." << endl;
    cout << " Profit on the Circuit Board in percentage: " << profit * 100 << " %." << endl;
    cout << " Profit on the Circuit Board in $: " << profitAmount << " $." << endl;
    cout << " Selling Price of the Circuit Board: " << sellingPrice << " $.\n" << endl;

    return 0;
}

