//	By: Tassawer Hussain < th.tassawer@gmail.com >
//	Time: 08:12 PM
//	Date: 31/10/2014


//  Problem 005.
//  Average of Values
//  To get the average of a series of values, you add the values up and then divide the sum by
//  the number of values. Write a program that stores the following values in five different
//  variables: 28, 32, 37, 24, and 33. The program should first calculate the sum of these five
//  variables and store the result in a separate variable named sum.
//  Then, the program should divide the sum variable by 5 to get the average.
//  Display the average on the screen.

#include <iostream>

using namespace std;

int main() {
    int num1 = 28,
        num2 = 32,
        num3 = 37,
        num4 = 24,
        num5 = 33;

    int sum;
    double average;

    sum = num1 + num2 + num3 + num4 + num5;
    average = static_cast < double > (sum) / 5; // use for convert a value into other type

    cout << " Num1:" << num1 << endl;
    cout << " Num2:" << num2 << endl;
    cout << " Num3:" << num3 << endl;
    cout << " Num4:" << num4 << endl;
    cout << " Num5:" << num5 << endl;
    cout << " Their Sum: " << sum << endl;
    cout << " Average: " << average << endl;

    return 0;
}

