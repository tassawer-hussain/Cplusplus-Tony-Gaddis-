/*
	19. The Speed of Sound in Gases
	When sound travels through a gas, its speed depends primarily on the density of the
	medium. The less dense the medium, the faster the speed will be. The following table
	shows the approximate speed of sound at 0 degrees centigrade, measured in meters
	per second, when traveling through carbon dioxide, air, helium, and hydrogen.

	Medium				Speed (Meters per Second)
	Carbon Dioxide				258.0
	Air							331.5
	Helium						972.0
	Hydrogen					1,270.0

	Write a program that displays a menu allowing the user to select one of these four
	gases. After a selection has been made, the user should enter the number of seconds it
	took for the sound to travel in this medium from its source to the location at which it
	was detected. The program should then report how far away (in meters) the source of
	the sound was from the detection location.

	Input Validation: Check that the user has selected one of the available menu choices.
	Do not accept times less than 0 seconds or more than 30 seconds.
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout<<"\n***********************************";
	cout<<"\n*                                 *";
	cout<<"\n*               MENU              *";
	cout<<"\n*                                 *";
	cout<<"\n***********************************";
	cout<<"\n\n\tChoose a Medium";
	cout<<"\n\t1. Carbon Dioxide";
	cout<<"\n\t2. Air";
	cout<<"\n\t3. Helium";
	cout<<"\n\t4. Hydrogen\n\n";

	int choice;
	cin>>choice;
	while(choice<1 || choice>4)
	{
		cout<<"\nError MSG!\nWrong option is Selected.\nPlease Choose wisely: ";
		cin>>choice;
	}

	double time;
	cout<<"Enter the number of seconds it took for the sound\nto travel in this medium from its source to the location: ";
	cin>>time;

	while(time<1 || time>30) 
	{
		cout<<"\nError MSG!\nTime must be in the range 00 to 30.\nPlease enter again: ";
		cin>>time;
	}

	switch(choice)
	{
		case 1:
			cout<<"\n\nMedium: Carbon Dioxide\nDistance: "<<time * 258.0;
			cout<<"\nSpeed: 258.0 Meters per second.";
			cout<<"\nTime Taken to cover the Distance: "<<time<<" sec\n\n";
			break;
		
		case 2:
			cout<<"\n\nMedium: Air\nDistance: "<<time * 331.5;
			cout<<"\nSpeed: 331.5 Meters per second.";
			cout<<"\nTime Taken to cover the Distance: "<<time<<" sec\n\n";
			break;

		case 3:
			cout<<"\n\nMedium: Helium\nDistance: "<<time * 972.0;
			cout<<"\nSpeed: 972.0 Meters per second.";
			cout<<"\nTime Taken to cover the Distance: "<<time<<" sec\n\n";
			break;

		case 4:
			cout<<"\n\nMedium: Hydrogen\nDistance: "<<time * 1270.0;
			cout<<"\nSpeed: 1,270.0 Meters per second.";
			cout<<"\nTime Taken to cover the Distance: "<<time<<" sec\n\n";
			break;
	}

	return 0;
}
