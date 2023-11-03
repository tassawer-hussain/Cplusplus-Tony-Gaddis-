//	13. Order Status

/*	The Middletown Wholesale Copper Wire Company sells spools of copper wiring for
	$100 each. Write a program that displays the status of an order. The program should
	have a function that asks for the following data:

	� The number of spools ordered.
	� The number of spools in stock.
	� Whether there are special shipping and handling charges. 
	(Shipping and handling is normally $10 per spool.) If there are special charges, the
	program should ask for the special charges per spool.

	The gathered data should be passed as arguments to another function that displays
	� The number of spools ready to ship from current stock.
	� The number of spools on backorder (if the number ordered is greater than what is in stock).
	� Subtotal of the portion ready to ship (the number of spools ready to ship times $100).
	� Total shipping and handling charges on the portion ready to ship.
	� Total of the order ready to ship.
	The shipping and handling parameter in the second function should have the default argument 10.00.

	Input Validation: Do not accept numbers less than 1 for spools ordered. Do not
	accept a number less than 0 for spools in stock or shipping and handling charges.
*/


#include <iostream>
using namespace std;

// Function Prototype
void getSpoilOrder(int &);
void spoilStock(int &);
void specialCharges(double &);
void orderStatus(const int &, const int &, const double =10.0);

const int SPOOLS_COST = 100;

int main() {
	int spools_order, spools_Stock;
	double special_charges;

	getSpoilOrder(spools_order);
	spoilStock(spools_Stock);
	specialCharges(special_charges);
	
	if(special_charges==0) {
		orderStatus(spools_order,spools_Stock);
	}
	else {
		orderStatus(spools_order, spools_Stock, special_charges);
	}

	return 0;
}

void getSpoilOrder(int & order) {
	cout<<"Enter number of Spools Order: ";
	cin>>order;
	while(order < 1) {
		cout<<"ERROR: Order can\'t less than 1. Enter gaain: ";
		cin>>order;
	}
}

void spoilStock(int & stock) {
	cout<<"Enter number of Spools in Stock: ";
	cin>>stock;
	while(stock < 0) {
		cout<<"ERROR: Stock can\'t less than 0. Enter gaain: ";
		cin>>stock;
	}
}

void specialCharges(double & charges) {
	cout<<"Any special Charges for Shipping then enter(Enter 0 for normal charges): ";
	cin>>charges;
	while(charges < 0) {
		cout<<"ERROR: Charges can\'t less than 0. Enter gaain: ";
		cin>>charges;
	}
}

void orderStatus(const int & order, const int & stock, const double shipCharges) {
	int spoolCharges, totalBill;
	double shippingCost;

	if(stock>order) {
		cout<<"\n\n\nSpools in Stock: "<<stock;
		cout<<"\nSpools Order: "<<order;
		cout<<"\nNumber of Spools Ready to Ship: "<<order;
		cout<<"\nNumber of Spools on backorder: 0";
		spoolCharges = order*SPOOLS_COST;
		cout<<"\nCost of the Spools: "<<spoolCharges;
		shippingCost = order*shipCharges;
		cout<<"\nTotal Shipping Charges: "<<shippingCost;
		totalBill = spoolCharges + shippingCost;
		cout<<"\nTotal Bill of the Order: "<<totalBill;
		cout<<"\n\n";
	}
	else {
		cout<<"\n\n\nSpools in Stock: "<<stock;
		cout<<"\nSpools Order: "<<order;
		cout<<"\nNumber of Spools Ready to Ship: "<<stock;
		cout<<"\nNumber of Spools on backorder: "<<order-stock;
		spoolCharges = stock*SPOOLS_COST;
		cout<<"\nCost of the Spools: "<<spoolCharges;
		shippingCost = stock*shipCharges;
		cout<<"\nTotal Shipping Charges: "<<shippingCost;
		totalBill = spoolCharges + shippingCost;
		cout<<"\nTotal Bill of the Order: "<<totalBill;
		cout<<"\n\n";
	}
}
