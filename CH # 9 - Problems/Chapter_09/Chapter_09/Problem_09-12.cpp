//	12. Array Expander

/*	Write a function that accepts an int array and the array�s size as arguments. The
	function should create a new array that is twice the size of the argument array. The
	function should copy the contents of the argument array to the new array, and initialize
	the unused elements of the second array with 0. The function should return a pointer to the new array.
*/

#include <iostream>

using namespace std;

// Function Prototype
int * arrayExpander(int * , int);

int main() {
    int arrSize, * arrPtr, * receivePtr;

    cout << "Enter Number of Elements: ";
    cin >> arrSize;

    arrPtr = new int[arrSize];

    for (int i = 0; i < arrSize; i++) {
        cout << "Enter Value " << i + 1 << ": ";
        cin >> arrPtr[i];
    }

    cout << "\n\nOriginal Array.\n";
    for (int i = 0; i < arrSize; i++)
        cout << arrPtr[i] << " ";

    receivePtr = arrayExpander(arrPtr, arrSize);

    cout << "\n\nNew Expanded Array.\n";
    for (int i = 0; i < arrSize * 2; i++)
        cout << receivePtr[i] << " ";

    cout << "\n\n";

    delete[] arrPtr;
    delete[] receivePtr;

    return 0;
}

int * arrayExpander(int * ptr, int size) {
    int * localPtr, newSize = size * 2;

    localPtr = new int[newSize];

    int j = 0;

    for (int i = 0; i < size; i++, j++)
        localPtr[i] = ptr[i];

    for (; j < newSize; j++)
        localPtr[j] = 0;

    return localPtr;
}