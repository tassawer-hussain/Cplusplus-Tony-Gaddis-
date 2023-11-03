/*
	4. Calories Burned
	Running on a particular treadmill you burn 3.9 calories per minute. Write a program
	that uses a loop to display the number of calories burned after 10, 15, 20, 25, and 30
	minutes.
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double bCalories = 3.9;

	cout<<"Calories Burned\t\tAfter Minutes\n";
	cout<<"------------------------------------------\n";

	for(int i=10; i<=30; i+=5)
	{
		cout<<"    "<<setprecision(1)<<fixed<<showpoint<<i*3.9<<"\t\t\t"<<i<<endl;
	}
	return 0;
}
