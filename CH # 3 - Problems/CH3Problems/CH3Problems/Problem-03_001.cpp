// Problem 01: Miles per Gallon
// Write a program that calculates a car�s gas mileage. The program should ask the user
// to enter the number of gallons of gas the car can hold, and the number of miles it can
// be driven on a full tank. It should then display the number of miles that may be driven
// per gallon of gas.


#include <iostream>
using namespace std;

int main()
{
	double carCapacity, noOfMiles;

	cout<<"Enter the number of gallons of gas the car can hold: ";
	cin>> carCapacity;

	cout<<"Enter the Number Of Miles it Can be driven on A Full Tank: ";
	cin>>noOfMiles;

	cout<<"The Car can travel "<< noOfMiles/carCapacity <<" Miles per gallon.\n";

	return 0;
}
