/*
	5. Membership Fees Increase
	A country club, which currently charges $2,500 per year for membership, has
	announced it will increase its membership fee by 4% each year for the next six years.
	Write a program that uses a loop to display the projected rates for the next six years.
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double mFee = 2500;
	cout<<"After year\t\tFee(In Dollar)\n";
	cout<<"______________________________________\n";

	for (int i=1; i<=6; i++)
	{
		mFee = mFee + mFee*0.04;
		cout<<"   "<<i<<"\t\t\t"<<setprecision(8)<<showpoint<<"$"<<mFee<<endl;
	}
	return 0;
}
