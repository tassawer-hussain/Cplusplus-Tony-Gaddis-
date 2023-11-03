//	3. Drop Lowest Score

/*	Modify Problem 2 above so the lowest test score is dropped. This score should not be
	included in the calculation of the average.
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

    cout << "Averages after dropping lowest score: " << findAvg(dynamicArr, arraySize) << "\n\n";

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

    sum = sum - ptr[0]; // subtract the first lowest score

    return sum / static_cast < double > (size - 1);
}