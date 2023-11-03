/*
	6. Mass and Weight
	Scientists measure an object�s mass in kilograms and its weight in newtons. If you
	know the amount of mass that an object has, you can calculate its weight, in newtons,
	with the following formula:
	
	Weight = mass � 9.8

	Write a program that asks the user to enter an object�s mass, and then calculates and
	displays its weight. If the object weighs more than 1,000 newtons, display a message
	indicating that it is too heavy. If the object weighs less than 10 newtons, display a
	message indicating that the object is too light.

*/



#include <iostream>
using namespace std;

int main()
{
	const double NEWTON = 9.8;
	double mass, weight;

	cout<<"Enter the mass of the body: ";
	cin>>mass;

	weight = mass * NEWTON;

	if (weight < 10)
	{
		cout<<"\nThe bodyis too Light.";
		cout<<"\nMass: "<<mass;
		cout<<"\nWeight: "<<weight<<"\n\n";
	}
	else if (weight > 1000)
	{
		cout<<"\nThe bodyis too Heavy.";
		cout<<"\nMass: "<<mass;
		cout<<"\nWeight: "<<weight<<"\n\n";
	}
	else
	{
		cout<<"\nMass: "<<mass;
		cout<<"\nWeight: "<<weight<<"\n\n";
	}

	return 0;
}
