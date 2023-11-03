/*
	14. Running the Race
	Write a program that asks for the names of three runners and the time it took each of
	them to finish a race. The program should display who came in first, second, and third
	place.
	Input Validation: Be sure the names do not overflow the arrays. Only accept positive
	numbers for the times.
*/


#include <iostream>
using namespace std;

int main()
{
	char name1[50], name2[50], name3[50];
	double time1, time2, time3;

	cout<<"Enter Name Of 1st Runner: ";
	cin.getline(name1,50);
	cout<<"Enter Time Of 1st Runner: ";
	cin>>time1;
	cout<<"\n\n";

	cin.ignore(); // Not to take Enter input in Second name
	cout<<"Enter Name Of 2nd Runner: ";
	cin.getline(name2,50);
	cout<<"Enter Time Of 2nd Runner: ";
	cin>>time2;
	cout<<"\n\n";

	cin.ignore();
	cout<<"Enter Name Of 3rd Runner: ";
	cin.getline(name3,50);
	cout<<"Enter Time Of 3rd Runner: ";
	cin>>time3;
	cout<<"\n\n";


	if(time1<time2 && time1<time3)
	{
		cout<<name1<<" comes First in Running with Time "<<time1<<endl;
		if(time2<time3)
		{
			cout<<name2<<" comes Second in Running with Time "<<time2<<endl;
			cout<<name3<<" comes Third in Running with Time "<<time3<<endl;
		}
		else
		{
			cout<<name3<<" comes Second in Running with Time "<<time3<<endl;
			cout<<name2<<" comes Third in Running with Time "<<time2<<endl;
		}
	}
	else if(time2<time1 && time2<time3)
	{
		cout<<name2<<" comes First in Running with Time "<<time2<<endl;
		if(time1<time3)
		{
			cout<<name1<<" comes Second in Running with Time "<<time1<<endl;
			cout<<name3<<" comes Third in Running with Time "<<time3<<endl;
		}
		else
		{
			cout<<name3<<" comes Second in Running with Time "<<time3<<endl;
			cout<<name1<<" comes Third in Running with Time "<<time1<<endl;
		}
	}
	else
	{
		cout<<name3<<" comes First in Running with Time "<<time3<<endl;
		if(time1<time2)
		{
			cout<<name1<<" comes Second in Running with Time "<<time1<<endl;
			cout<<name2<<" comes Third in Running with Time "<<time2<<endl;
		}
		else
		{
			cout<<name2<<" comes Second in Running with Time "<<time2<<endl;
			cout<<name1<<" comes Third in Running with Time "<<time1<<endl;
		}
	}
	cout<<endl;

	return 0;
}
