/*
	8. Sorted Names
	Write a program that asks the user to enter three names, and then displays the names
	sorted in alphabetical order. Assume that none of the names are the same. For example,
	if the user entered �Charlie,� �Leslie,� and �Andy,� the program would display:
	Andy
	Charlie
	Leslie
*/


#include <iostream>
#include <cstring> // for string compare
using namespace std;

int main()
{
	char name1[21], name2[21], name3[21];

	cout<<"Enter 1st name: ";
	cin>>name1;

	cout<<"Enter 2nd name: ";
	cin>>name2;

	cout<<"Enter 3rd name: ";
	cin>>name3;

	cout<<"\n\n";
	if (strcmp(name1, name2)<0 && strcmp(name1,name3)<0)
	{
		cout<<name1<<endl;
		if(strcmp(name2,name3)<0)
		{	
			cout<<name2<<endl;
			cout<<name3<<endl;
		}
		else
		{
			cout<<name3<<endl;
			cout<<name2<<endl;
		}
	}
	else if (strcmp(name2, name1)<0 && strcmp(name2,name3)<0)
	{
		cout<<name2<<endl;
		if(strcmp(name1,name3)<0)
		{	
			cout<<name1<<endl;
			cout<<name3<<endl;
		}
		else
		{
			cout<<name3<<endl;
			cout<<name1<<endl;
		}
	}
	else
	{
		cout<<name3<<endl;
		if(strcmp(name1, name2)<0)
		{
			cout<<name1<<endl;
			cout<<name2<<endl;
		}
		else
		{
			cout<<name2<<endl;
			cout<<name1<<endl;
		}
	}
	return 0;
}
