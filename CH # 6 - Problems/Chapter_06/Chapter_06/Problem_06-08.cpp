//	8. Coin Toss

/*	Write a function named coinToss that simulates the tossing of a coin. When you call
	the function, it should generate a random number in the range of 1 through 2. If the
	random number is 1, the function should display �heads.� If the random number is 2,
	the function should display �tails.� Demonstrate the function in a program that asks
	the user how many times the coin should be tossed, and then simulates the tossing of
	the coin that number of times.
*/


#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// Funtion Prototype
void coinToss();

int main() {
	int count;
	cout<<"Enter How many times you Want to toss a coin: ";
	cin>>count;

	cout<<"\n\n";
	for (int i=0; i<count; i++) {
		cout<<"\nToss "<<i+1<<": ";
		coinToss();
	}
	cout<<"\n\n";

	return 0;
}

void coinToss() {
	srand(time(0));
	int num = rand()%3;

	while (num==0)
		num = rand()%3;
	
	if (num == 1)
		cout<<"Head";
	else
		cout<<"Tail";
}
