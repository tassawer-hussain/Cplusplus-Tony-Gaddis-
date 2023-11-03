// Problem 010: Celsius to Fahrenheit
// Write a program that converts Celsius temperatures to Fahrenheit temperatures. The
// formula is
// F =  (9 / 5) * C + 32
// F is the Fahrenheit temperature and C is the Celsius temperature.


#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	double celsTemp, fahrTemp;

	cout<<"Enter Temperature in Celsius Degree: ";
	cin>>celsTemp;

	fahrTemp = (9 * celsTemp) / 5 + 32;

	cout<<"\n\nTemp In Celsius: "<<celsTemp<<"\n";
	cout<<"Temp In Fahrenheit: "<<fahrTemp<<"\n\n";
	return 0;
}
