//	10. Reverse Array

/*	Write a function that accepts an int array and the array�s size as arguments. The
	function should create a copy of the array, except that the element values should be
	reversed in the copy. The function should return a pointer to the new array. Demonstrate
	the function in a complete program.
*/
#include <iostream>

using namespace std;

// Function Prototype
int * reverseArray(int * , int);

int main() {
    int arrSize, * arrPtr, * receivePtr;

    cout << "Enter Number of Elements: ";
    cin >> arrSize;

    arrPtr = new int[arrSize];

    for (int i = 0; i < arrSize; i++) {
        cout << "Enter Value " << i + 1 << ": ";
        cin >> arrPtr[i];
    }

    cout << "\n\nArray in original order.\n";
    for (int i = 0; i < arrSize; i++)
        cout << arrPtr[i] << " ";

    receivePtr = reverseArray(arrPtr, arrSize);

    cout << "\n\nArray in original order.\n";
    for (int i = 0; i < arrSize; i++)
        cout << receivePtr[i] << " ";

    cout << "\n\n";

    delete[] arrPtr;
    delete[] receivePtr;

    return 0;
}

int * reverseArray(int * ptr, int size) {
    int * localPtr = new int[size];

    for (int i = 0, j = size - 1; i < size; i++, j--)
        localPtr[i] = ptr[j];

    return localPtr;
}