// Problem 021: Saving Numbers to a File
// For this assignment you will write two programs:
// Program 1 Write a program that asks the user to enter five numbers. Use a floating-
// point data type to hold the numbers. The program should create a
// file and save all five numbers to the file.
// Program 2 Write a program that opens the file created by Program 1, reads the five
// numbers, and displays them. The program should also calculate and
// display the sum of the five numbers.


#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	ofstream fout;
	fout.open("file21.txt");

	const int size = 5;
	double num[size];

	for(int i=0; i<size; i++)
	{
		cout<<"Enter Number 0"<<i+1<<": ";
		cin>>num[i];
	}

	cout<<"\n\n Now we are storing the Numbers In a File: \n";
	for(int i=0; i<size; i++)
	{
		fout<<num[i]<<" ";
	}
	cout<<"All The Number Have Stored in File.\n\n";
	fout.close();

	cout<<"We are going to Read the number from File: \n";

	ifstream fin;
	fin.open("file21.txt");

	double sum = 0;
	for(int i=4,j=0; i>=0; i--,j++)
	{
		cout<<"Read Number 0"<<j+1<<": "<<endl;
		fin>>num[i];
		sum += num[i];
	}

	cout<<"\n\nWe have completed the reading from File.\n";
	fin.close();

	for(int i=0; i<size; i++)
	{
		cout<<"Number 0"<<i+1<<": "<<num[i]<<endl;
	}
	cout<<"\nSum: "<<sum<<endl;
	return 0;
}
