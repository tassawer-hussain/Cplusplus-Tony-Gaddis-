//	5.getString Function

/*	Write a function named getString that has a local char array of 80 elements. The function should ask the user
	to enter a sentence, and store the sentence in the array. Then the function should dynamically allocate a
	char array just large enough to hold the sentence, plus the null terminator. It should copy the sentence to the dynamically
	allocated array, and then return a pointer to the array. Demonstrate the function in a complete program.
*/

#include <iostream>

#include <cstring>

using namespace std;

// Function Prototype
char * getString();

int main() {
    char * p;
    cout << "I am going to call the function.\n";
    p = getString();
    cout << "\nHere is the sentence.\n\n";

    cout << p;
    cout << "\n\n";

    delete[] p;
    p = 0;
    return 0;
}

char * getString() {
    char array[80];
    cout << "Enter a string.\n";
    cin.getline(array, 80);

    int size = strlen(array);

    char * ptr;
    ptr = new char[size + 1];

    int i = 0;
    while (i < size) {
        ptr[i] = array[i];
        i++;
    }

    ptr[size] = '\0';
    return ptr;
}