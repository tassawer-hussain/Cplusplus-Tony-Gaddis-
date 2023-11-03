/*
	16. Fat Gram Calculator
	Write a program that asks for the number of calories and fat grams in a food. The
	program should display the percentage of calories that come from fat. If the calories
	from fat are less than 30% of the total calories of the food, it should also display a
	message indicating that the food is low in fat.
	
	One gram of fat has 9 calories, so
	Calories from fat = fat grams * 9
	
	The percentage of calories from fat can be calculated as
	Calories from fat � total calories

	Input Validation: Make sure the number of calories and fat grams are not less than 0.
	Also, the number of calories from fat cannot be greater than the total number of calories.
	If that happens, display an error message indicating that either the calories or fat
	grams were incorrectly entered.
*/


#include <iostream>
using namespace std;

int main()
{
	int calories;
	double fats;

	cout<<"Enter number of calories in a food: ";
	cin>>calories;
	while(calories<0)
	{
		cout<<"\n\nError MSG!\nCalories must be zero or greather then zero.\nPlease enter again.";
		cin>>calories;
	}

	cout<<"Enter grams fat in a food: ";
	cin>>fats;
	while(fats<0)
	{
		cout<<"\n\nError MSG!\nFats must be zero or greather then zero.\nPlease enter again.";
		cin>>fats;
	}

	if(fats*9 < calories*0.30)
	{
		cout<<"\n\nThe food is in low Calories.";
		cout<<"\nCalories in Food: "<<calories;
		cout<<"\nFats gram in Food: "<<fats;
		cout<<"\nCalories comes from fats: "<<fats*9;
		cout<<"\nPercentage of calories from Fats: "<<(fats*9/calories) * 100;
		cout<<"\n\n";
	}
	else
	{
		cout<<"\n\nError MSG!\nThe calories or fat grams were incorrectly entered.";
		cout<<"\n\n";
	}

	return 0;
}
