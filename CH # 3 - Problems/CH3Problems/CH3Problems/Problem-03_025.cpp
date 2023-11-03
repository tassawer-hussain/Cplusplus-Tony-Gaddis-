// Problem 025: Word Game
// Write a program that plays a word game with the user. The program should ask the
// user to enter the following:
// � His or her name
// � His or her age
// � The name of a city
// � The name of a college
// � A profession
// � A type of animal
// � A pet�s name
// After the user has entered these items, the program should display the following story,
// inserting the user�s input into the appropriate locations:
// There once was a person named NAME who lived in CITY. At the age of
// AGE, NAME went to college at COLLEGE. NAME graduated and went to work
// as a PROFESSION. Then, NAME adopted a(n) ANIMAL named PETNAME. They
// both lived happily ever after!



#include <iostream>
using namespace std;
int main()
{
	char name[20], city[15], college[40], profession[25], animal[20], pet[25];
	int age;
	cout<<"Enter Name: ";
	cin.getline(name,20);

	cout<<"Enter Age: ";
	cin>>age;

	cout<<"Enter City Name: ";
	cin>>city;

	cout<<"Enter College Name: ";
	cin>>college;

	cout<<"Enter Professional: ";
	cin>>profession;

	cout<<"Enter Animal Name: ";
	cin>>animal;

	cout<<"Enter Pet Name: ";
	cin>>pet;

	cout<<"\n\nThere once was a person named "<< name <<" who lived in "<<city<<".\n"
		<<"At the age of "<< age << ", " << name << " went to college at "<<college<<
		".\n"<< name << " graduated and went to work as a "<< profession <<".\nThen, "<<name<<
		" adopted a(n) "<< animal <<" named "<< pet<<".\nThey both lived happily ever after! \n\n";

	return 0;
}
