//	By: Tassawer Hussain < th.tassawer@gmail.com >
//	Time: 08:36 PM
//	Date: 31/10/2014

//  Problem 007.
//  Ocean Levels
//  Assuming the ocean�s level is currently rising at about 1.5 millimeters per year,
//  write a program that displays:
//  The number of millimeters higher than the current level that the ocean�s level will
//  be in 5 years
//  The number of millimeters higher than the current level that the ocean�s level will
//  be in 7 years
//  The number of millimeters higher than the current level that the ocean�s level will
//  be in 10 years

#include <iostream>

using namespace std;

int main() {
    const double risingLevel = 1.5;

    cout << " Current rising Level: " << risingLevel << endl;
    cout << endl;

    cout << " After 5 Yeays," << endl;
    cout << " The ocean\'s level will be " << 5 * risingLevel << " millimeters higher than the current level.\n";
    cout << endl;

    cout << " After 7 Yeays," << endl;
    cout << " The ocean\'s level will be " << 7 * risingLevel << " millimeters higher than the current level.\n";
    cout << endl;

    cout << " After 10 Yeays," << endl;
    cout << " The ocean\'s level will be " << 10 * risingLevel << " millimeters higher than the current level.\n";
    cout << endl;
    return 0;
}

