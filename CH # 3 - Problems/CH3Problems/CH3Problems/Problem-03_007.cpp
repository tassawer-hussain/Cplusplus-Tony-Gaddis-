// Problem 07: How Many Calories?
// A bag of cookies holds 40 cookies. The calorie information on the bag claims that
// there are 10 �servings� in the bag and that a serving equals 300 calories. Write a program
// that asks the user to input how many cookies he or she actually ate and then
// reports how many total calories were consumed.


#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	// declaration of const
	const double totalCookies = 40,
		totalServing = 10,
		caloriesPerServing = 300,
		cookiesPerServing = 4;

	// variable declaration
	int cookiesEat;
	double servingEaten, eatenCalories;

	// take input
	cout<<"Enter How Many Cookies, You Have eaten? ";
	cin>>cookiesEat;

	// calculation
	servingEaten = cookiesEat / cookiesPerServing; 
	eatenCalories = servingEaten * caloriesPerServing;
	
	// show OutPut
	cout << "\n\n\n" ;
	cout << setprecision(2) << fixed << showpoint;
	cout<<"Cookies You Have Eaten: "<<cookiesEat<<"\n";
	cout<<"Serving In Eaten Cookies: "<<servingEaten<<"\n";
	cout<<"Calories In Per Serving: "<<caloriesPerServing<<"\n";
	cout<<"Calories You Have Eaten: "<<eatenCalories<<"\n\n\n";
	return 0;
}
