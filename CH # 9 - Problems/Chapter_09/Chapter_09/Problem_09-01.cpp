//	1. Array Allocator

/*	Write a function that dynamically allocates an array of integers. The function should
	accept an integer argument indicating the number of elements to allocate. The function
	should return a pointer to the array.
*/

#include <iostream>

using namespace std;

// Function Prototype
int * dynamicArray(int);

int main() {
    int arraySize, * dynamicArr;

    cout << "Enter number of element you want to create a dynamic array: ";
    cin >> arraySize;

    dynamicArr = dynamicArray(arraySize);

    cout << "\nArray Created. . . . . .\n";
    for (int i = 0; i < arraySize; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> dynamicArr[i];
    }

    cout << "\n\n";
    for (int i = 0; i < arraySize; i++) {
        cout << dynamicArr[i] << " ";
    }

    cout << "\n\n";
    delete[] dynamicArr;
    dynamicArr = 0;

    return 0;
}

int * dynamicArray(int size) {
    int * ptr;
    ptr = new int[size];
    return ptr;
}