//	17. Paint Job Estimator

/*	A painting company has determined that for every 115 square feet of wall space, one
	gallon of paint and eight hours of labor will be required. The company charges
	$18.00 per hour for labor. Write a modular program that allows the user to enter the
	number of rooms that are to be painted and the price of the paint per gallon. It should
	also ask for the square feet of wall space in each room. It should then display the following data:
	
	� The number of gallons of paint required
	� The hours of labor required
	� The cost of the paint
	� The labor charges
	� The total cost of the paint job

	Input validation: Do not accept a value less than 1 for the number of rooms. Do not accept a value
	less than $10.00 for the price of paint. Do not accept a negative value	for square footage of wall space.
*/


#include <iostream>
using namespace std;

// Function Prototype
void input(int &, int &, double &);
void cal_expense(int &, double &, double &, double &, double &, double &, double &);

const int WALL_AREA = 115, HOURS = 8;
const double LABOUR_COST = 18.00;

int main() {
	int rooms=0, total_area=0;
	double total_hours=0.0, req_gallons=0.0, total_cost=0.0, labour_charges=0.0, total_paint_charges=0.0, per_paint_price=0.0;

	input(rooms, total_area, per_paint_price);
	cal_expense(total_area, req_gallons, labour_charges, total_paint_charges, total_cost, total_hours, per_paint_price);

	cout<<"\n\n\nThe number of gallons of paint required: "<<req_gallons;
	cout<<"\nThe hours of labor required: "<<total_hours;
	cout<<"\nThe cost of the paint: "<<total_paint_charges;
	cout<<"\nThe labor charges: "<<labour_charges;	
	cout<<"\nThe total cost of the paint job: "<<total_cost;
	cout<<"\n\n";

	return 0;
}

void cal_expense(int & t_area, double & r_gallons, double & l_cost, double & tp_charges, double & t_cost, double & t_hours, double & ppc) {
	double fraction;
	fraction = t_area % 115;
	r_gallons = t_area / 115;
	r_gallons+= fraction>0.00 ? 1 : 0;
	tp_charges = r_gallons * ppc;

	t_hours = (static_cast<double>(t_area) / 115.0) * 8;
	l_cost = t_hours * LABOUR_COST;

	t_cost = tp_charges+l_cost;
}

void input(int & r, int & wa, double & ppc) {
	int area;
	cout<<"Enter the number of Roome: ";
	cin>>r;
	while(r<1) {
		cout<<"ERROR: Room cannot be less than 1. Enter Again: ";
		cin>>r;
	}

	for(int i=0; i<r; i++) {
		cout<<"Enter square foot of wall space for room "<<i+1<<" :";
		cin>>area;
		while(area<1) {
			cout<<"ERROR: Room Area cannot be less than 1 square foot. Enter Again for room "<<i+1<<" :";
			cin>>area;
		}
		wa+=area;
	}

	cout<<"Enter cost of per gallon Paint: ";
	cin>>ppc;
	while(ppc<10.0) {
		cout<<"ERROR: Cost per gallon cannot be less than & 10.0. Enter Again: ";
		cin>>ppc;
	}
}
