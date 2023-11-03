//	16. Transient Population

/*	Modify Programming Challenge 15 to also consider the effect on population caused
	by people moving into or out of a geographic area. Given as input a starting population
	size, the annual birth rate, the annual death rate, the number of individuals who typically
	move into the area each year, and the number of individuals who typically leave
	the area each year, the program should project what the population will be numYears from now.
	You can either prompt the user to input a value for numYears, or you can set it within the program.

	Input Validation: Do not accept numbers less than 2 for the starting size. Do not
	accept negative numbers for birth rate, death rate, arrivals, or departures.
*/


#include <iostream>
using namespace std;

// Function Prototype
void newPopulation(int & , double &, double &, int &, int &, int &);

int main() {
	int starting_size, years, moving_in, moving_out;
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

	cout<<"Enter number of People who move into the area each year: ";
	cin>>moving_in;
	while(moving_in<1) {
		cout<<"ERROR: Years cannot be less than 1. Enter Aain: ";
		cin>>moving_in;
	}

	cout<<"Enter number of People who move out from the area each year: ";
	cin>>moving_out;
	while(moving_out<1) {
		cout<<"ERROR: Years cannot be less than 1. Enter Aain: ";
		cin>>moving_out;
	}

	newPopulation(starting_size, b_rate, d_rate, years, moving_in, moving_out);
	cout<<"\n\nNew Population after "<<years<<" years :"<<starting_size; // starting_size modified in function
	cout<<"\n\n";

	return 0;
}

void newPopulation(int & p, double & b, double & d, int & n, int & mi, int & mo) { 
	for(int i = 0; i<n; i++)
		p  += (p*b - p*d + mi - mo);
}
