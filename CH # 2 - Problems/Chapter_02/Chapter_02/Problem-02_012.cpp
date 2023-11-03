//	By: Tassawer Hussain < th.tassawer@gmail.com >
//	Time: 08:45 AM
//	Date: 01/11/2014

//  Problem 012.
//  Land Calculation
//  One acre of land is equivalent to 43,560 square feet.
//  Write a program that calculates the number of acres
//  in a tract of land with 389,767 square feet.

#include <iostream>

using namespace std;

int main() {
    // 43560 square feet equal to 1 acre.
    const int squareFeet = 43560,
        landMeasure = 389767;

    double acre;

    // Type conversion........ :)
    acre = static_cast < double > (landMeasure) / squareFeet;

    cout << " As " << squareFeet << " square feet is equal to 1 acre.\n" <<
        " So," << landMeasure << " square feet is equal to " << acre << " acre.\n\n";

    return 0;
}
