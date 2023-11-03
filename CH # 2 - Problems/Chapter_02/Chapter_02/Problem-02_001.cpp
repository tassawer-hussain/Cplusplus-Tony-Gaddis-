//	By: Tassawer Hussain < th.tassawer@gmail.com >
//	Time: 12:55 AM
//	Date: 10/10/2014


//  Problem 001
//  Sum of Two Numbers
//  Write a program that stores the integers 62 and 99 in variables,
//  and stores the sum of these two in a variable named total.

#include<iostream>

using namespace std;

int main() {
    int num1 = 62;
    int num2 = 99;

    int total;

    total = num1 + num2;

    // output

    cout << " Num1: " << num1 << endl;
    cout << " Num2: " << num2 << endl;
    cout << " Total: " << total << endl;

    return 0;
}