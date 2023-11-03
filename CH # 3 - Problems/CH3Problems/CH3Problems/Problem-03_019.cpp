// Problem 019: How Many Pizzas?
// Modify the program you wrote in Programming Challenge 18 (Pizza Pi) so that it
// reports the number of pizzas you need to buy for a party if each person attending is
// expected to eat an average of four slices. The program should ask the user for the
// number of people who will be at the party and for the diameter of the pizzas to be
// ordered. It should then calculate and display the number of pizzas to purchase.


#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	const double Pi = 3.14159,
		perSliceArea = 14.125,
		perPersonSlice = 4;

	double diameter, radius, slice, sliceRequired, area, person, pizza;

	cout<<"Enter the Diameter of Pizza in Inches: ";
	cin>>diameter;

	cout<<"Enter the Number Of People/Guests: ";
	cin>>person;

	sliceRequired = perPersonSlice * person;
	radius = diameter / 2.0 ;
	area = Pi * pow (radius , 2.0);
	slice = area / perSliceArea ;

	pizza = sliceRequired / slice ;

	cout<<setprecision(1)<<fixed<<showpoint;
	cout<<"\n\nNumber of Slices In "<<diameter<<" Inches Pizza Are: "<<slice;
	cout<<"\nNumber of Pizza Required for "<< person << " preson Are: "<<pizza;
	cout<<"\n\n";

	return 0;
}
