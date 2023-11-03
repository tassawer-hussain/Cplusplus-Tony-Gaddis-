//	2. Test Scores #1

/*	Write a program that dynamically allocates an array large enough to hold a user-
	deﬁned number of test scores. Once all the scores are entered, the array should be
	passed to a function that sorts them in ascending order. Another function should be
	called that calculates the average score. The program should display the sorted list of
	scores and averages with appropriate headings. Use pointer notation rather than array
	notation whenever possible.
	Input Validation: Do not accept negative numbers for test scores.
*/

#include <iostream>

using namespace std;

// Function Prototype
int * dynamicArray(int);
void getValue(int * , int);
void selectionSort(int * , int);
double findAvg(int * , int);

int main() {
    int arraySize, * dynamicArr;

    cout << "Enter number of element you want to create a dynamic array: ";
    cin >> arraySize;

    dynamicArr = dynamicArray(arraySize);
    cout << "\nArray Created. . . . . .\n";

    getValue(dynamicArr, arraySize);
    selectionSort(dynamicArr, arraySize);

    cout << "\n\nSorted Array\n";
    for (int i = 0; i < arraySize; i++) {
        cout << dynamicArr[i] << " ";
    }
    cout << "\n\n";

    cout << "Averages: " << findAvg(dynamicArr, arraySize) << "\n\n";

    delete[] dynamicArr;
    dynamicArr = 0;

    return 0;
}

int * dynamicArray(int size) {
    int * ptr;
    ptr = new int[size];
    return ptr;
}

void getValue(int * ptr, int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> ptr[i];
        while (ptr[i] < 0 || ptr[i] > 100) {
            cout << "ERROR: Enter +ve value only within 1 to 100. ";
            cin >> ptr[i];
        }
    }
}

void selectionSort(int * ptr, int size) {
    int startScan, minIndex, minValue;
    for (startScan = 0; startScan < (size - 1); startScan++) {
        minIndex = startScan;
        minValue = ptr[startScan];

        for (int index = startScan + 1; index < size; index++) {
            if (ptr[index] < minValue) {
                minValue = ptr[index];
                minIndex = index;
            }
        }
        ptr[minIndex] = ptr[startScan];
        ptr[startScan] = minValue;
    }
}

double findAvg(int * ptr, int size) {
    int sum = 0;

    for (int i = 0; i < size; i++)
        sum += ptr[i];

    return sum / static_cast < double > (size);
}