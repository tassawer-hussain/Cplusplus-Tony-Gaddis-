//	5. Falling Distance

/*	When an object is falling because of gravity, the following formula can be used to
	determine the distance the object falls in a speciﬁc time period:

	d = 1/2 (g * t square)

	The variables in the formula are as follows: d is the distance in meters, g is 9.8, and t
	is the amount of time, in seconds, that the object has been falling.
	Write a function named	fallingDistance that accepts an object’s falling time (in seconds) as an argument.
	The function should return the distance, in meters, that the object has fallen during that time interval.
	Write a program that demonstrates the function by calling it in a loop that passes the values 1 through
	10 as arguments, and displays the return value.
*/


#include <iostream>
using namespace std;

// Function Prototype
double fallingDistance(const int &t);

int main() {
	for (int i=1; i<=10; i++) {
		cout<<"\nThe Distance Cover in "<<i<<" Sec is: "<<fallingDistance(i); 
	}
	cout<<"\n\n";
	return 0;
}

double fallingDistance(const int &t) {
	return (9.8*t*t) / 2.0;
}
