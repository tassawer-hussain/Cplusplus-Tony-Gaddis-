// 9. Median Function

/*	In statistics, when a set of values is sorted in ascending or descending order, its median
	is the middle value. If the set contains an even number of values, the median is the
	mean, or average, of the two middle values. Write a function that accepts as arguments the following:
	
	A) An array of integers
	B) An integer that indicates the number of elements in the array
	The function should determine the median of the array. This value should be returned as a double.
	(Assume the values in the array are already sorted.)
	Demonstrate your pointer prowess by using pointer notation instead of array notation in this function.
*/

#include <iostream>

using namespace std;

// Function Prototype
void selectionSort(int * , int);
double findMedian(int * , int);

int main() {
    int arrSize, * arrPtr;
    cout << "Enter number of values: ";
    cin >> arrSize;

    arrPtr = new int[arrSize];

    for (int i = 0; i < arrSize; i++) {
        cout << "Enter Value " << i + 1 << ": ";
        cin >> arrPtr[i];
    }

    selectionSort(arrPtr, arrSize);

    cout << "\n\nValues in sorted form are\n";
    for (int i = 0; i < arrSize; i++)
        cout << arrPtr[i] << " ";

    cout << "\nMedian of the Values is: " << findMedian(arrPtr, arrSize);
    cout << "\n\n";

    delete[] arrPtr;
    arrPtr = 0;

    return 0;
}

void selectionSort(int * ptr, int size) {
    int startScan, minIndex, minValue;

    for (startScan = 0; startScan < (size - 1); startScan++) {
        minValue = ptr[startScan];
        minIndex = startScan;

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

double findMedian(int * ptr, int size) {
    if (size % 2 == 0)
        return (ptr[size / 2] + ptr[(size / 2) - 1]) / 2.0;
    else
        return ptr[(size / 2)];
}