//	23. Rock, Paper, Scissors Game

/*	Write a program that lets the user play the game of Rock, Paper, Scissors against the
	computer. The program should work as follows.

	1. When the program begins, a random number in the range of 1 through 3 is generated.
	If the number is 1, then the computer has chosen rock. If the number is 2, then
	the computer has chosen paper. If the number is 3, then the computer has
	chosen scissors. (Don�t display the computer�s choice yet.)
	2. The user enters his or her choice of �rock�, �paper�, or �scissors� at the keyboard.
	(You can use a menu if you prefer.)
	3. The computer�s choice is displayed.
	4. A winner is selected according to the following rules:

	� If one player chooses rock and the other player chooses scissors, then rock wins. (The rock smashes the scissors.)
	� If one player chooses scissors and the other player chooses paper, then scissors wins. (Scissors cuts paper.)
	� If one player chooses paper and the other player chooses rock, then paper	wins. (Paper wraps rock.)
	� If both players make the same choice, the game must be played again to determine the winner.
	Be sure to divide the program into functions that perform each major task.
*/


#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

// Function Prototype
void comChoice (int &);
void displayMenu(int &);
void optionWord(int &, string &);
void winnerDecide(const int &, const int &);

int main() {
	int user_choice, comp_choice;
	string option;
	
	do {
		comChoice(comp_choice);
		displayMenu(user_choice);
	
		optionWord(user_choice, option);
		cout<<"\nYou choose: "<< option;

		optionWord(comp_choice, option);
		cout<<"\nComputer choose: "<< option<<endl<<endl;

		if (user_choice == comp_choice)
			cout<<"Both have select the same option. Choose again: ";
		else
			winnerDecide(user_choice, comp_choice);

	} while (user_choice == comp_choice);

	return 0;
}

void comChoice (int & comp) {
	srand(time(0));
	comp = rand()%4;
	while (comp == 0) {
		comp = rand()%4;
	}
}

void displayMenu(int & user) {
	cout<<"\n   Welcome To Rock, Paper, Scissors Game";
	cout<<"\nPlease Choose your choice";
	cout<<"\n1. Rock";
	cout<<"\n2. Paper";
	cout<<"\n3. Scissors\n";
	cin>>user;
	while(user<1 || user>3) {
		cout<<"ERROR: Enter 1, 2 or 3 only: ";
		cin>>user; // Error when user insert alphabet instead of digit
	}
}

void optionWord(int & num, string & ptr) {
	if(num==1)
		ptr = "Rock";
	else if (num ==2)
		ptr = "Paper";
	else
		ptr = "Scissors";
}

void winnerDecide(const int & user, const int & comp) {
	if(user == 1) {
		if(comp == 2)
			cout<<"\nComputer wins. As Paper wraps Rock.\n\n";
		else
			cout<<"\nYou wins. As Rock smashes the Scissors.\n\n;";
	}
	else if (user == 2) {
		if(comp==1)
			cout<<"\nYou wins. As Paper wraps Rock.\n\n";
		else
			cout<<"\nComputer wins. As Scissors cuts Paper.\n\n";
	}
	else {
		if(comp==1)
			cout<<"\nComputer wins. As Rock smashes the Scissors.\n\n;";
		else 
			cout<<"\nYou wins. As Scissors cuts Paper.\n\n";
	}
}
