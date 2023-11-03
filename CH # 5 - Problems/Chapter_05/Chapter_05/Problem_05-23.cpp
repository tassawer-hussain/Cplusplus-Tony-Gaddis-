/*
	23. Pattern Displays
	Write a program that uses a loop to display Pattern A below, followed by another
	loop that displays Pattern B.

	Pattern A							Pattern B
	+									++++++++++
	++									+++++++++
	+++									++++++++
	++++								+++++++
	+++++								++++++
	++++++								+++++
	+++++++								++++
	++++++++							+++
	+++++++++							++
	++++++++++							+
*/


#include <iostream>
using namespace std;

int main()
{
	cout<<"Pattern 'A'\n";
	for(int i=0; i<=10; i++)
	{
		for(int j=0; j<=i; j++)
		{
			cout<<"+";
		}
		cout<<endl;
	}


	cout<<"\n\nPattern 'B'\n";
	for(int i=10; i>=0; i--)
	{
		for(int j=0; j<=i; j++)
		{
			cout<<"+";
		}
		cout<<endl;
	}

	
	return 0;
}
