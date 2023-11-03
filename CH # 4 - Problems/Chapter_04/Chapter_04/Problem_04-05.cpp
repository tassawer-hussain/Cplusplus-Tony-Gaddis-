/*
	5. Body Mass Index
	Write a program that calculates and displays a person�s body mass index (BMI). The
	BMI is often used to determine whether a person with a sedentary lifestyle is overweight
	or underweight for his or her height. A person�s BMI is calculated with the following
	formula:

	BMI = weight � 703 / height2         //////(height square)
	
	where weight is measured in pounds and height is measured in inches. The program
	should display a message indicating whether the person has optimal weight, is underweight,
	or is overweight. A sedentary person�s weight is considered to be optimal if his
	or her BMI is between 18.5 and 25. If the BMI is less than 18.5, the person is considered
	to be underweight. If the BMI value is greater than 25, the person is considered
	to be overweight.
*/


#include <iostream>
#include <cmath> // for taking square of height
using namespace std;

int main()
{
	double weight, height, BMI;

	cout<<"Enter Weight: ";
	cin>>weight;

	cout<<"Enter Height: ";
	cin>>height;

	BMI = weight * 703 / pow(height, 2.0);

	if (BMI < 18.5)
		cout<<"\n\nTHe person is Under Weight.\n\n";
	else if (BMI > 25)
		cout<<"\n\nTHe person is Over Weight.\n\n";
	else
		cout<<"\n\nTHe person has Optimal Weight.\n\n";
	
	return 0;
}
