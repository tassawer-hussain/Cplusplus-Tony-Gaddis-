//	By: Tassawer Hussain < th.tassawer@gmail.com >
//	Time: 09:27 AM
//	Date: 01/11/2014

//  Problem 017.
//  Stock Commission
//  Kathryn bought 600 shares of stock at a price of $21.77 per share. She must pay her
//  stock broker a 2 percent commission for the transaction. Write a program that calculates
//  and displays the following:
//  � The amount paid for the stock alone (without the commission)
//  � The amount of the commission
//  � The total amount paid (for the stock plus the commission)

#include <iostream>

using namespace std;

int main() {
    const int shares = 600;
    const double perShare = 21.77;
    const double commission = 0.02; // commission is 2 %

    double stockCosts, commCosts, total;

    stockCosts = shares * perShare;
    commCosts = stockCosts * commission;
    total = stockCosts + commCosts;

    cout << " Kathryn bought " << shares << " shares of stock at a price of $" <<
        perShare << " per share.\n" <<
        " The amount paid for the stock alone (without the commission): " << stockCosts << endl <<
        " The amount of the commission: " << commCosts << endl <<
        " The total amount paid (for the stock plus the commission): " << total << endl;
    cout << endl;

    return 0;
}