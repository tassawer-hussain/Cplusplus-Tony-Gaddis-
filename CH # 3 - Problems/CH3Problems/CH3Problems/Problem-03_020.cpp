// Problem 020: Angle Calculator
// Write a program that asks the user for an angle, entered in radians. The program
// should then display the sine, cosine, and tangent of the angle. (Use the sin, cos, and
// tan library functions to determine these values.) The output should be displayed in
// fixed-point notation, rounded to four decimal places of precision.



#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	double angle;

	cout<<"Enter Angle in Radian: ";
	cin>>angle;

	cout<<"\n\nSine: "<<sin(angle);
	cout<<"\nCosine: "<<cos(angle);
	cout<<"\nTangent: "<<tan(angle);
	cout<<"\n\n";
	return 0;
}
