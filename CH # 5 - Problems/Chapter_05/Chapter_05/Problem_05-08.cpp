/*
	8. Math Tutor
	This program started in Programming Challenge 15 of Chapter 3, and was modified
	in Programming Challenge 9 of Chapter 4.
	
	Modify the program again so it displays a menu allowing the user to select an addition,
	subtraction, multiplication, or division problem. The final selection on the menu should
	let the user quit the program. After the user has finished the math problem, the program should
	display the menu again. This process is repeated until the user chooses to quit the program.

	Input Validation: If the user selects an item not on the menu, display an error message
	and display the menu again.
*/



#include <iostream>
#include <ctime> // For time Function
#include <cstdlib> // For Random Number
#include <iomanip> // For formatting
using namespace std;

int main()
{
	int choice;

	do
	{
		cout<<"\t\t** MENU **\n";
		cout<<"1- Addition Problem\n";
		cout<<"2- Subtraction Problem\n";
		cout<<"3- Multiplication Problem\n";
		cout<<"4- Division Problem\n";
		cout<<"5- Quit\n";
		cout<<"Enter your choice: ";
		cin>>choice;
		cout<<"\n";

		if(choice<1 || choice>5)
		{
			cout<<"Error MSG!\nInvalid Option Selected.\n\n";
		}
	
	} while(choice<1 || choice>5);

	unsigned seed = time(0);
	srand(seed);

	int num1 = rand();
	int num2 = rand();
	int userAns, originalAns;

	switch(choice)
	{
		case 1:
			cout<<setw(5)<<num1<<endl;
			cout<<setw(5)<<num2<<endl;
			cout<<"\nEnter Answer: ";
			cin>>userAns;
			originalAns = num1 + num2;
			if(userAns == originalAns)
				cout<<"\nCongratulation! Your Answer is Correct. . . . .\n\n";
			else
				cout<<"\nOoop! Your answer is Incorrect.\nRight answer is: "<<originalAns<<"\n\n";
			break;

		case 2:
			cout<<setw(5)<<num1<<endl;
			cout<<setw(5)<<num2<<endl;
			cout<<"\nEnter Answer: ";
			cin>>userAns;
			originalAns = num1 - num2;
			if(userAns == originalAns)
				cout<<"\nCongratulation! Your Answer is Correct. . . . .\n\n";
			else
				cout<<"\nOoop! Your answer is Incorrect.\nRight answer is: "<<originalAns<<"\n\n";
			break;

		case 3:
			cout<<setw(5)<<num1<<endl;
			cout<<setw(5)<<num2<<endl;
			cout<<"\nEnter Answer: ";
			cin>>userAns;
			originalAns = num1 * num2;
			if(userAns == originalAns)
				cout<<"\nCongratulation! Your Answer is Correct. . . . .\n\n";
			else
				cout<<"\nOoop! Your answer is Incorrect.\nRight answer is: "<<originalAns<<"\n\n";
			break;

		case 4:
			cout<<setw(5)<<num1<<endl;
			cout<<setw(5)<<num2<<endl;
			cout<<"\nEnter Answer: ";
			cin>>userAns;
			originalAns = num1 / num2;
			if(userAns == originalAns)
				cout<<"\nCongratulation! Your Answer is Correct. . . . .\n\n";
			else
				cout<<"\nOoop! Your answer is Incorrect.\nRight answer is: "<<originalAns<<"\n\n";
			break;
		
		case 5:
			cout<<"Programme is going to Terminated.\n\n";
	}

	return 0;
}
