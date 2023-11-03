// Problem 018: Pizza Pi
// Joe�s Pizza Palace needs a program to calculate the number of slices a pizza of any size
// can be divided into. The program should perform the following steps:
// A) Ask the user for the diameter of the pizza in inches.
// B) Calculate the number of slices that may be taken from a pizza of that size.
// C) Display a message telling the number of slices.
// To calculate the number of slices that may be taken from the pizza, you must know
// the following facts:
// � Each slice should have an area of 14.125 inches.
// � To calculate the number of slices, simply divide the area of the pizza by 14.125.
// � The area of the pizza is calculated with this formula:
// Area = Pi * r ^ 2
//
//	NOTE: Pi is the Greek letter pi. 3.14159 can be used as its value. The variable r is the
// radius of the pizza. Divide the diameter by 2 to get the radius.
// Make sure the output of the program displays the number of slices in fixed point
// notation, rounded to one decimal place of precision. Use a named constant for pi.


#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	const double Pi = 3.14159,
		perSliceArea = 14.125;

	double diameter, radius, slice, area;

	cout<<"Enter the Diameter of Pizza in Inches: ";
	cin>>diameter;

	radius = diameter / 2.0 ;
	area = Pi * pow (radius , 2.0);
	slice = area / perSliceArea ;

	cout<<setprecision(1)<<fixed<<showpoint;
	cout<<"\n\nNumber of Slices In "<<diameter<<" Inches Pizza Are: "<<slice;
	cout<<"\n\n";

	return 0;
}
