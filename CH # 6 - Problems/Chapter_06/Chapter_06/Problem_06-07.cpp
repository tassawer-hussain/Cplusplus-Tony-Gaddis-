// 7. Celsius Temperature Table

/*	The formula for converting a temperature from Fahrenheit to Celsius is
	C = 5/9 (F-32)

	where F is the Fahrenheit temperature and C is the Celsius temperature. Write a function named
	celsius that accepts a Fahrenheit temperature as an argument. The function should return the temperature,
	converted to Celsius. Demonstrate the function by calling it in a loop that displays a table of the
	Fahrenheit temperatures 0 through 20 and their Celsius equivalents.
*/


#include <iostream>
#include <iomanip> // For output formatting
using namespace std;

// Function Prototype
double celsius(const int & temp);
int main() {
	cout<<"Fahrenheit\t\tCelsius\n";

	for (int i=0; i<=20; i++) {
		cout<<setw(6)<<i<<"\t\t\t"<<setw(5)<<setprecision(2)<<fixed<<celsius(i)<<endl;
	}

	return 0;
}

double celsius(const int & temp) {
	return (temp-32) * 5.0 /9.0;
}
