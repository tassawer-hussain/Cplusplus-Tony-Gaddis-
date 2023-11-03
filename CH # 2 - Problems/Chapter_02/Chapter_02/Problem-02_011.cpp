//	By: Tassawer Hussain < th.tassawer@gmail.com >
//	Time: 09:22 PM
//	Date: 31/10/2014

//  Problem 011.
//  Distance per Tank of Gas
//  A car with a 20-gallon gas tank averages 21.5 miles per gallon when driven in town
//  and 26.8 miles per gallon when driven on the highway. Write a program that calculates
//  and displays the distance the car can travel on one tank of gas when driven in
//  town and when driven on the highway.
//  Hint: The following formula can be used to calculate the distance:
//  Distance = Number of Gallons � Average Miles per Gallon

#include <iostream>

using namespace std;

int main() {
    const int tankCapacity = 20;
    const double inTown = 21.5,
        onHighway = 26.8;

    double distance;

    distance = tankCapacity * inTown;
    cout << " The car with a " << tankCapacity << "-gallon gas tank,\n" <<
        " Averages 21.5 miles per gallon when driven in Town,\n" <<
        " can cover Distance of " << distance << " Miles.\n\n";

    distance = tankCapacity * onHighway;
    cout << " The car with a " << tankCapacity << "-gallon gas tank,\n" <<
        " Averages 26.8 miles per gallon when driven on HighWay,\n" <<
        " can cover Distance of " << distance << " Miles.\n\n";

    return 0;
}
