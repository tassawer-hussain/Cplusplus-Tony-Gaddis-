// Problem 02: Stadium Seating
// There are three seating categories at a stadium.
// For a softball game, Class A seats cost $15,
// Class B seats cost $12, and Class C seats cost $9.
// Write a program that asks how many tickets for each class of seats were sold,
// then displays the amount of income generated from ticket sales.
// Format your dollar amount in fixed-point notation, with
// two decimal places of precision, and be sure the decimal point is always displayed.


#include <iomanip> // For output Formatinng
#include <iostream>
using namespace std;

int main()
{
	// const variable declaration
	const double costA = 15,
		costB = 12,
		costC = 9;
	
	int seatAsold, seatBsold, seatCsold;
	double incomeA, incomeB, incomeC, totalIncome;
	
	// take input
	cout<<"Enter How Many seats of Class \'A\' Sold? ";
	cin>>seatAsold;

	cout<<"Enter How Many seats of Class \'B\' Sold? ";
	cin>>seatBsold;

	cout<<"Enter How Many seats of Class \'C\' Sold? ";
	cin>>seatCsold;

	// calculation
	incomeA = costA * seatAsold;
	incomeB = costB * seatBsold;
	incomeC = costC * seatCsold;
	totalIncome = incomeA + incomeB + incomeC;

	// output Formatting
	cout<<setprecision(2)<<fixed<<showpoint;

	// show output
	cout<<"\n\nSeat sold of Class \'A\': " << seatAsold << '\n' ;
	cout<<"Per Seat Cost Of Class \'A\': $" << costA << '\n';
	cout<<"Income From Class \'A\' Seats: $" << incomeA << "\n\n";

	cout<<"Seat sold of Class \'B\': " << seatBsold << '\n' ;
	cout<<"Per Seat Cost Of Class \'B\': $" << costB << '\n';
	cout<<"Income From Class \'B\' Seats: $" << incomeB << "\n\n";

	cout<<"Seat sold of Class \'C\': " << seatCsold << '\n' ;
	cout<<"Per Seat Cost Of Class \'C\': $" << costC << '\n';
	cout<<"Income From Class \'C\' Seats: $" << incomeC << "\n\n";

	cout<<"Total Income : $" << totalIncome<< "\n\n";

	return 0;
}
