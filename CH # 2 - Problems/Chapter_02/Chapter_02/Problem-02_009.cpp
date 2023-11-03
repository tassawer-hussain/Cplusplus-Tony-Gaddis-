//	By: Tassawer Hussain < th.tassawer@gmail.com >
//	Time: 09:01 PM
//	Date: 31/10/2014

//  Problem 009.
//  Cyborg Data Type Sizes
//  You have been given a job as a programmer on a Cyborg supercomputer.
//  In order to accomplish some calculations, you need to know how many bytes the following data
//  types use: char, int, float, and double. You do not have any manuals, so you can�t
//  look this information up.
//  Write a C++ program that will determine the amount of
//  memory used by these types and display the information on the screen.

#include <iostream>

using namespace std;

int main() {
    // use of sizeof built in function to detrermine the size
    // of different data type. :)
    cout << " Char Needs: " << sizeof(char) << " Bytes.\n";
    cout << " Int Needs: " << sizeof(int) << " Bytes.\n";
    cout << " Float Needs: " << sizeof(float) << " Bytes.\n";
    cout << " Double Needs: " << sizeof(double) << " Bytes.\n";

    return 0;
}
