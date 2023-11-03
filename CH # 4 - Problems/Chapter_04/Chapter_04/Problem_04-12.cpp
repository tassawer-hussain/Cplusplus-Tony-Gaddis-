/*
	12. Bank Charges
	A bank charges $10 per month plus the following check fees for a commercial checking account:

	$.10 each for fewer than 20 checks
	$.08 each for 20�39 checks
	$.06 each for 40�59 checks
	$.04 each for 60 or more checks

	The bank also charges an extra $15 if the balance of the account falls below $400
	(before any check fees are applied). Write a program that asks for the beginning balance
	and the number of checks written. Compute and display the bank�s service fees
	for the month.
	Input Validation: Do not accept a negative value for the number of checks written. If
	a negative value is given for the beginning balance, display an urgent message indicating
	the account is overdrawn.
*/


#include <iostream>
using namespace std;

int main()
{
	double Balance, charges;
	int checks;

	cout<<"Enter the Beginning Balance: ";
	cin>>Balance;

	if(Balance<0)
		cout<<"\nThe accout balance is OverDrawn.\n\n";

	cout<<"Enter Number of checks: ";
	cin>>checks;

	while (checks<0)
	{
		cout<<"Error MSG! \n Enter a positive number of checks.";
		cin>>checks;
	}

	if(checks < 20)
	{
		if(Balance<400)
			charges = 10 + 0.10 * checks + 15;
		else
			charges = 10 + 0.10 * checks;
	}
	else if( checks>=20 && checks<40)
	{
		if(Balance<400)
			charges = 10 + 0.08 * checks + 15;
		else
			charges = 10 + 0.08 * checks;
	}
	else if( checks>=40 && checks<60)
	{
		if(Balance<400)
			charges = 10 + 0.06 * checks + 15;
		else
			charges = 10 + 0.06 * checks;
	}
	else
	{
		if(Balance<400)
			charges = 10 + 0.04 * checks + 15;
		else
			charges = 10 + 0.04 * checks;
	}

	cout<<"\n\nBeginning Balance: "<<Balance;
	cout<<"\nChecks: "<<checks;
	cout<<"\nCharges: "<<charges;
	cout<<"\n\n";
	return 0;
}
