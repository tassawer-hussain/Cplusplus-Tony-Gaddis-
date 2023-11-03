/*
	9. Math Tutor
	This is a modification of Programming Challenge 15 from Chapter 3. Write a program
	that can be used as a math tutor for a young student. The program should display
	two random numbers that are to be added, such as:
		247
	  + 129
	The program should wait for the student to enter the answer. If the answer is correct,
	a message of congratulations should be printed. If the answer is incorrect, a message
	should be printed showing the correct answer.
*/



#include <cstdlib>      // For rand and srand
#include <ctime>       // For the time function
#include <iomanip>      // For input Manipulation
#include <iostream>
using namespace std;

int main()
{
	// Get the system time.
    unsigned seed = time(0);
	
	// Seed the random number generator.
	srand(seed);
	
	// Display two random numbers.
	int y = rand();
	int z = rand();
	cout<<setw(5)<<y<<endl;
	cout<<setw(5)<<z<<endl;
	int x = y + z;

	int ans;
	cout<<"\n\nEnter Answer: ";
	cin>>ans;

	if(x == ans)
		cout<<"\nCongratulation! Your Answer is Correct. . . . .\n\n";
	else
		cout<<"\nOoop! Your answer is Incorrect.\nRight answer is: "<<x<<"\n\n";

	// cout<<x<<endl<<endl;
	return 0;
}
