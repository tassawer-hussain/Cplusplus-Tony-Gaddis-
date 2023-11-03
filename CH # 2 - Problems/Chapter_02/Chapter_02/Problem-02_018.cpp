//	By: Tassawer Hussain < th.tassawer@gmail.com >
//	Time: 09:40 AM
//	Date: 01/11/2014

//  Problem 018.
//  Energy Drink Consumption
//  A soft drink company recently surveyed 12,467 of its customers and found that
//  approximately 14 percent of those surveyed purchase one or more energy drinks per
//  week. Of those customers who purchase energy drinks, approximately 64 percent of
//  them prefer citrus flavored energy drinks. Write a program that displays the following:
//  � The approximate number of customers in the survey who purchase one or more
//  energy drinks per week
//  � The approximate number of customers in the survey who prefer citrus flavored
//  energy drinks

#include <iostream>

using namespace std;

int main() {
    const int totalPeople = 12467;
    const double user = 0.14, // 14 %
        prefer = 0.64; // 64 %

    // int dataType use to store whole number,
    // because people count can't be in float or decimal point. :)
    int userCount, preferCount;

    userCount = totalPeople * user;
    preferCount = userCount * prefer;

    cout << " People involve in the Survey are: " << totalPeople << endl;
    cout << " Peole use the Energy Drinks: " << user * 100 << " %" << endl <<
        " People count who use Energy Drinks: " << userCount << " People.\n" <<
        " People who prefer Citrus Flavored: " << preferCount << " People.\n\n";

    return 0;
}
