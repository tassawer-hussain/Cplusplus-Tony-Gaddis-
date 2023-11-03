//	15. Population

/*	In a population, the birth rate is the percentage increase of the population due to
	births and the death rate is the percentage decrease of the population due to deaths.
	Write a program that displays the size of a population for any number of years. The
	program should ask for the following data:
	� The starting size of a population
	� The annual birth rate
	� The annual death rate
	� The number of years to display

	Write a function that calculates the size of the population for a year. The formula is
		N = P + BP - DP
	where N is the new population size, P is the previous population size, B is the birth
	rate, and D is the death rate.

	Input Validation: Do not accept numbers less than 2 for the starting size. Do not accept negative numbers
	for birth rate or death rate. Do not accept numbers less than 1 for the number of years.
*/


#include <iostream>
using namespace std;

// Function Prototype
void newPopulation(int & , double &, double &, int &);

int main() {
	int starting_size, years;
	double b_rate, d_rate;

	cout<<"Enter Starting Size of Population: ";
	cin>>starting_size;
	while(starting_size<2) {
		cout<<"ERROR: Starting Size does not less than 2. Enter Again: ";
		cin>>starting_size;
	}

	cout<<"Enter Birth Rate: ";
	cin>>b_rate;
	while (b_rate<0) {
		cout<<"ERROR: Birth Rate cannot be negative. Enter Aain: ";
		cin>>b_rate;
	}
	b_rate /= 100.0; // convert 5% to 0.05

	cout<<"Enter Death Rate: ";
	cin>>d_rate;
	while(d_rate<0) {
		cout<<"ERROR: Death Rate cannot be negative. Enter Aain: ";
		cin>>d_rate;
	}
	d_rate /= 100.0; // convert 5% to 0.05

	cout<<"Enter Number of Years: ";
	cin>>years;
	while(years<1) {
		cout<<"ERROR: Years cannot be less than 1. Enter Aain: ";
		cin>>years;
	}

	newPopulation(starting_size, b_rate, d_rate, years);
	cout<<"\n\nNew Population after "<<years<<" years :"<<starting_size; // starting_size modified in function
	cout<<"\n\n";

	return 0;
}

void newPopulation(int & p, double & b, double & d, int & n) { 
	for(int i = 0; i<n; i++)
		p  += (p*b - p*d);
}
