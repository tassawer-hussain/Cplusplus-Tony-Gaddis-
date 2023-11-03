// Problem 015: Math Tutor
// Write a program that can be used as a math tutor for a young student. The program
// should display two random numbers to be added, such as
//    247
//  + 129
// The program should then pause while the student works on the problem. When the
// student is ready to check the answer, he or she can press a key and the program will
// display the correct solution:
//    247
//  + 129
//   -----
//    376


#include <cstdlib>      // For rand and srand
#include <ctime>       // For the time function
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
	cout<<y<<endl;
	cout<<z<<endl;

	char ch;
	int x = y + z;
	cin.get(ch);
	cout<<x<<endl<<endl;
	return 0;
}
