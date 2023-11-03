// 20. Random Number Guessing Game

/*	Write a program that generates a random number and asks the user to guess what the
	number is. If the user's guess is higher than the random number, the program should
	display �Too high, try again.� If the user�s guess is lower than the random number, the
	program should display �Too low, try again.� The program should use a loop that
	repeats until the user correctly guesses the random number.
*/


#include <iostream>
#include <ctime> // For Time Function
#include <cstdlib> // For Random function
using namespace std;

int main() {
	srand(time(0));
	int user_answer, answer;
	
	do{
		cout<<"Let hve a fun Game. Select a number between 1 to 25. ";
		cin>>user_answer;
		
		answer = rand()%25; // Generate a number and modulus it with 25 to get number between 0 to 24
		if(answer ==0) // if number is 0 then increase it to 1
			answer++;

		if(user_answer==answer)
			cout<<"Congrats! Your answer is match.\n";
		else if(user_answer<answer)
			cout<<"Too Low, try again. The answer is "<<answer<<"\n";
		else
			cout<<"Too High, try again. The answer is "<<answer<<"\n";
	
	} while(user_answer!=answer);
	return 0;
}
