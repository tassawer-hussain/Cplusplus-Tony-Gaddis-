/*
	18. The Speed of Sound
	The following table shows the approximate speed of sound in air, water, and steel.

	Medium					Speed
	Air				1,100 feet per second
	Water			4,900 feet per second
	Steel			16,400 feet per second

	Write a program that displays a menu allowing the user to select air, water, or steel.
	After the user has made a selection, he or she should be asked to enter the distance a
	sound wave will travel in the selected medium. The program will then display the
	amount of time it will take. (Round the answer to four decimal places.)
	
	Input Validation: Check that the user has selected one of the available choices from
	the menu. Do not accept distances less than 0.
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
	cout<<"\n\t1. Air";
	cout<<"\n\t2. Water";
	cout<<"\n\t3. Steel\n\n";

	int choice;
	cin>>choice;
	while(choice<1 || choice>3)
	{
		cout<<"\nError MSG!\nWrong option is Selected.\nPlease Choose wisely: ";
		cin>>choice;
	}

	double distance;
	cout<<"Enter the distance a sound wave will travel: ";
	cin>>distance;

	while(distance<1)
	{
		cout<<"\nError MSG!\nDistance must be greater then zero.\nplease enter again: ";
		cin>>distance;
	}

	switch(choice)
	{
		case 1:
			cout<<"\n\nMedium: Air\nDistance: "<<distance;
			cout<<"\nSpeed: 1,100 feet per second.";
			cout<<"\nTime Taken to cover the Distance: "<<setprecision(4)<<fixed<<distance/1100.0<<" sec\n\n";
			break;
		
		case 2:
			cout<<"\n\nMedium: Water\nDistance: "<<distance;
			cout<<"\nSpeed: 4,900 feet per second.";
			cout<<"\nTime Taken to cover the Distance: "<<setprecision(4)<<fixed<<distance/4900.0<<" sec\n\n";
			break;

		case 3:
			cout<<"\n\nMedium: Steel\nDistance: "<<distance;
			cout<<"\nSpeed: 16,400 feet per second.";
			cout<<"\nTime Taken to cover the Distance: "<<setprecision(4)<<fixed<<distance/16400.0<<" sec\n\n";
			break;
	}

	return 0;
}
