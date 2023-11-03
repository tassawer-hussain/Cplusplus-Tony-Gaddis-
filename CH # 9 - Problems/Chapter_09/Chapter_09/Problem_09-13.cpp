//	13. Element Shifter

/*	Write a function that accepts an int array and the array’s size as arguments. The
	function should create a new array that is one element larger than the argument array.
	The ﬁrst element of the new array should be set to 0. Element 0 of the argument array
	should be copied to element 1 of the new array, element 1 of the argument array
	should be copied to element 2 of the new array, and so forth. The function should
	return a pointer to the new array.
*/

#include <iostream>

using namespace std;

// Function Prototype
int * elementShifter(int * , int);

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

    receivePtr = elementShifter(arrPtr, arrSize);

    cout << "\n\nNew Shifted Array.\n";
    for (int i = 0; i <= arrSize; i++)
        cout << receivePtr[i] << " ";

    cout << "\n\n";

    delete[] arrPtr;
    delete[] receivePtr;

    return 0;
}

int * elementShifter(int * ptr, int size) {
    int * localPtr, newSize = size + 1;

    localPtr = new int[newSize];

    localPtr[0] = 0;

    for (int i = 0, j = 1; i < size; i++, j++)
        localPtr[j] = ptr[i];

    return localPtr;
}