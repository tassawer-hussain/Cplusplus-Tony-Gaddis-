//	By: Tassawer Hussain < th.tassawer@gmail.com >
//	Time: 09:08 PM
//	Date: 31/10/2014

//  Problem 010.
//  Miles per Gallon
//  A car holds 12 gallons of gasoline and can travel 350 miles before refueling.
//  Write a program that calculates the number of miles per gallon the car gets.
//  Display the result on the screen.
//  Hint: Use the following formula to calculate miles per gallon (MPG):
//  MPG = Miles Driven / Gallons of Gas Used

#include<iostream>

using namespace std;

int main() {
    const int capacity = 12,
        distance = 350;

    double MPG;

    MPG = static_cast < double > (distance) / capacity;

    cout << " car holds " << capacity << " gallons of gasoline,\n" <<
        " and can travel " << distance << " miles before refueling.\n\n\n";
    cout << " Distancs Cover In One Mile: " << MPG << endl;

    return 0;
}
