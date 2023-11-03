// Problem 08: How Much Insurance?
// Many financial experts advise that property owners should insure their homes or buildings
// for at least 80 percent of the amount it would cost to replace the structure. Write a
// program that asks the user to enter the replacement cost of a building and then displays
// the minimum amount of insurance he or she should buy for the property.


#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	const double insuranceRatio = 0.80;

	double propertyValue, insurance;

	cout<<"Enter the Replacement Amount Of Your Building/House: ";
	cin>>propertyValue;

	insurance = propertyValue * insuranceRatio;

	cout<<setprecision(2)<<fixed<<showpoint;
	cout<<"You Should Buy Insurance at least Rs. "<<insurance;
	cout<<"\n\n";
	return 0;
}
