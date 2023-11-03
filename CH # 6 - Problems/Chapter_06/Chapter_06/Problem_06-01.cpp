//	1. Markup

/*	Write a program that asks the user to enter an item�s wholesale cost and its markup
	percentage. It should then display the item�s retail price. For example:

	� If an item�s wholesale cost is 5.00 and its markup percentage is 100%, then the
	item�s retail price is 10.00.
	� If an item�s wholesale cost is 5.00 and its markup percentage is 50%, then the
	item�s retail price is 7.50.

	The program should have a function named calculateRetail that receives the
	wholesale cost and the markup percentage as arguments, and returns the retail price of the item.
	
	Input Validation: Do not accept negative values for either the wholesale cost of the
	item or the markup percentage.
*/


#include <iostream>
using namespace std;

// function prototype
double calculateRetail(const double &, const double &); // By reference

int main() {
	double wholeSale, markUp, retailPrice;
	cout<<"Enter Whole Sale Price: ";
	cin>>wholeSale;
	cout<<"Enter Mark Up: ";
	cin>>markUp;

	retailPrice = calculateRetail(wholeSale, markUp);

	cout<<"\n\nWhole Sale Price: $"<<wholeSale;
	cout<<"\nMark UP: "<<markUp<<" %";
	cout<<"\nRetail Price: $"<<retailPrice<<endl<<endl;
	
	return 0;
}

double calculateRetail(const double &wSale, const double &mUP) {
	return wSale+(wSale*mUP/100);
}
