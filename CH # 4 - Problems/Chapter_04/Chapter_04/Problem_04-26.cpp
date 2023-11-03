/*
	26. File Input (Freezing and Boiling Points Modification)
	Modify the program that you wrote for Programming Challenge 20 (Freezing and
	Boiling Points) so it reads its input from a file instead of the keyboard. Perform the
	necessary test to determine if an error occurs when the file is opened. If an error
	occurs, display a message informing the user.

	20. Freezing and Boiling Points
	The following table lists the freezing and boiling points of several substances. Write a
	program that asks the user to enter a temperature, and then shows all the substances
	that will freeze at that temperature and all that will boil at that temperature. For
	example, if the user enters �20 the program should report that water will freeze and
	oxygen will boil at that temperature.

	Substance				Freezing Point (�F)			Boiling Point (�F)
	Ethyl alcohol				�173						172
	Mercury						�38							676
	Oxygen						�362						�306
	Water						32							212
*/


#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int temp;

	ifstream fin;
	fin.open("Problem26.txt");
	
	if(!fin)
	{
		cout<<"\nSorry! File coudn't be open.\n\n";
	}
	else
	{
		cout<<"File is opened!\nNow reading temperature from file.";
		fin>>temp;

		if (temp<=-362)
			cout<<"\n\nEthyl Alcohol, Mercury, Oxygen and Water will freeze and";
		else if(temp>-362 && temp<=-173)
			cout<<"\n\nEthyl Alcohol, Mercury and Water will freeze and";
		else if(temp>-173 && temp<=-38)
			cout<<"\n\nMercury and Water will freeze and";
		else if(temp>-38 && temp<=32)
			cout<<"\n\nWater will freeze and";
		else 
			cout<<"\n\nNothing will freeze and";

		if (temp>=676)
			cout<<" Ethyl Alcohol, Mercury, Oxygen and Water will Boil at "<<temp<<".\n\n";
		else if(temp>=212 && temp<676)
			cout<<" Ethyl Alcohol, Oxygen and Water will Boil at "<<temp<<".\n\n";
		else if(temp>=172 && temp<212)
			cout<<" Oxygen and Ethyl Alcohol will Boil at "<<temp<<".\n\n";
		else if(temp>=-306 && temp<172)
			cout<<" Oxygen will Boil at "<<temp<<".\n\n";
		else 
			cout<<" Nothing will Boil at "<<temp<<".\n\n";
	}
	return 0;
}