/*
	12. Celsius to Fahrenheit Table
	In Programming Challenge 10 of Chapter 3 you were asked to write a program that
	converts a Celsius temperature to Fahrenheit. Modify that program so it uses a loop
	to display a table of the Celsius temperatures 0�20, and their Fahrenheit equivalents.
*/


#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	double fahrTemp;

	cout<<"Celsius Temp\t\tFahrenheit Temp";
	cout<<"\n------------------------------------------";
	for( int i=0; i<=20; i++)
	{
		fahrTemp = (9.0 * i) / 5 + 32;
		cout<<"\n    "<<i<<"\t\t\t  "<<setprecision(1)<<fixed<<fahrTemp;
	}
	cout<<"\n\n";
	return 0;
}
