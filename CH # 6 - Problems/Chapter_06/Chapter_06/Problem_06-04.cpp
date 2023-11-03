//	4. Safest Driving Area

/*	Write a program that determines which of ﬁve geographic regions within a major city
	(north, south, east, west, and central) had the fewest reported automobile accidents
	last year. It should have the following two functions, which are called by main.

	• int getNumAccidents() is passed the name of a region. It asks the user for the
	number of automobile accidents reported in that region during the last year, validates
	the input, then returns it. It should be called once for each city region.

	• void findLowest() is passed the five accident totals. It determines which is the
	smallest and prints the name of the region, along with its accident figure.

	Input Validation: Do not accept an accident number that is less than 0.
*/


#include <iostream>
using namespace std;

//Function Protype
int getNumAccidents(const char *);
void findLowest(const int&, const int&, const int&, const int&, const int&);

int main() {

	int accident1, accident2, accident3, accident4, accident5;
	char div1[] = "North",
		div2[] = "South",
		div3[] = "East",
		div4[] = "West",
		div5[] = "Central";

	accident1 = getNumAccidents(div1);
	accident2 = getNumAccidents(div2);
	accident3 = getNumAccidents(div3);
	accident4 = getNumAccidents(div4);
	accident5 = getNumAccidents(div5);

	findLowest(accident1, accident2, accident3, accident4, accident5);

	return 0;
}

int getNumAccidents(const char *arr) {
	int acci;
	cout<<"Enter the Number of Accidents of "<<arr<<" :";
	cin>>acci;

	while(acci<0.00) {
		cout<<"ERROR: Accident must not be less than 0.00. Enter Again: ";
		cin>>acci;
	}
	return acci;
}

void findLowest(const int& a, const int& b, const int& c, const int& d, const int& e) {
	if (a<b && a<c && a<d && a<e)
		cout<<"\n\nNorth has the Lowest Accidents with "<<a<<"\n\n";
	else if (b<a && b<c && b<d && b<e)
		cout<<"\n\nSouth has the Lowest Accidents with "<<b<<"\n\n";
	else if (c<b && c<a && c<d && c<e)
		cout<<"\n\nEast has the Lowest Accidents with "<<c<<"\n\n";
	else if (d<b && d<c && d<a && d<e)
		cout<<"\n\nWest has the Lowest Accidents with "<<d<<"\n\n";
	else
		cout<<"\n\nCentral has the Lowest Accidents with "<<e<<"\n\n";
}
