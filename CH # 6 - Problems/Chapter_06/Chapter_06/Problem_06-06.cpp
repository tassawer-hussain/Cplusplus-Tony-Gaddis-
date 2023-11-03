//	6. Kinetic Energy

/*	In physics, an object that is in motion is said to have kinetic energy. The following formula
	can be used to determine a moving object�s kinetic energy:
	KE = 1/2 (m * v square)

	The variables in the formula are as follows: KE is the kinetic energy, m is the object�s
	mass in kilograms, and v is the object�s velocity, in meters per second.
	Write a function named kineticEnergy that accepts an object�s mass (in kilograms)
	and velocity (in meters per second) as arguments. The function should return the
	amount of kinetic energy that the object has. Demonstrate the function by calling it in
	a program that asks the user to enter values for mass and velocity. 
*/


#include <iostream>
using namespace std;

// Function Prototype
double kineticEnergy(const double &, const double &);

int main() {
	double mass, velocity;

	cout<<"Enter Mass of the Object in Kilogram: ";
	cin>>mass;
	cout<<"Enter Velocity of the Object in m/s: ";
	cin>>velocity;

	cout<<"Kinetic Energy: "<<kineticEnergy(mass, velocity);
	cout<<"\n\n";

	return 0;
}

double kineticEnergy(const double & m, const double & v) {
	return (m*v*v) / 2.0;
}
