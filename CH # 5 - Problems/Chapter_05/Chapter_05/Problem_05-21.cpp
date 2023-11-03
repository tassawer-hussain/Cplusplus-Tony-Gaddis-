//	21. Random Number Guessing Game Enhancement

/*	Enhance the program that you wrote for Programming Challenge 20 so it keeps a
	count of the number of guesses that the user makes. When the user correctly guesses
	the random number, the program should display the number of guesses.
*/


#include <iostream>
#include <ctime> // For Time Function
#include <cstdlib> // For Random function
using namespace std;

int main() {
	srand(time(0));
	int user_answer, answer, attempt=0;
	
	cout<<"Let have a fun Game.";
	do{
		cout<<"\nSelect a number between 1 to 25. ";
		cin>>user_answer;
		attempt++;

		answer = rand()%25; // Generate a number and modulus it with 25 to get number between 0 to 24
		if(answer ==0) // if number is 0 then increase it to 1
			answer++;

		if(user_answer==answer) {
			cout<<"\n\nCongrats! Your answer is match.\n";
			cout<<"You did it in "<<attempt<<" attempts.\n\n";
		}
		else if(user_answer<answer)
			cout<<"Too Low, try again. The answer is "<<answer<<"\n";
		else
			cout<<"Too High, try again. The answer is "<<answer<<"\n";
	
	} while(user_answer!=answer);
	return 0;
}
