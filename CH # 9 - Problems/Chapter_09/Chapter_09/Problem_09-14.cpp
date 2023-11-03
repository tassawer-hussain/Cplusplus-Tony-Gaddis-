//	14. Movie Statistics

/*	Write a program that can be used to gather statistical data about the number of movies college students see in a month.
	The program should perform the following steps:
	A) Ask the user how many students were surveyed. An array of integers with this 
		many elements should then be dynamically allocated.
	B) Allow the user to enter the number of movies each student saw into the array.
	C) Calculate and display the average, median, and mode of the values entered. (Use 
		the functions you wrote in Problems 8 and 9 to calculate the median and mode.)

	Input Validation: Do not accept negative numbers for input.
*/

#include <iostream>

using namespace std;

// Function Prototype
double findAverage(int * , int);
int findMode(int * , int);
void selectionSort(int * , int); // sort to find Median
double findMedian(int * , int);

int main() {
    int arrSize, * arrPtr;

    cout << "Enter Number of Students Participated in Survey: ";
    cin >> arrSize;

    arrPtr = new int[arrSize];

    for (int i = 0; i < arrSize; i++) {
        cout << "How many movies did Students " << i + 1 << " see: ";
        cin >> arrPtr[i];
        while (arrPtr[i] < 0) {
            cout << "ERROR: Negative value does not allow. Enter Again: ";
            cin >> arrPtr[i];
        }
    }

    cout << "\n\nOriginal Array.\n";
    for (int i = 0; i < arrSize; i++)
        cout << arrPtr[i] << " ";

    cout << "\n\nAverage: " << findAverage(arrPtr, arrSize);
    cout << "\nMode: " << findMode(arrPtr, arrSize);
    selectionSort(arrPtr, arrSize); // Call this to find the median
    cout << "\nMedian: " << findMedian(arrPtr, arrSize);

    cout << "\n\nSorted Array.\n";
    for (int i = 0; i < arrSize; i++)
        cout << arrPtr[i] << " ";

    cout << "\n\n";

    delete[] arrPtr;
    arrPtr = 0;

    return 0;
}

double findAverage(int * ptr, int size) {
    int sum = 0;

    for (int i = 0; i < size; i++)
        sum += ptr[i];

    return double(sum) / double(size); // Type casting from int to double
}

int findMode(int * ptr, int size) { // Only return a single mode, need to be modified
    int ** localPtr;
    localPtr = new int * [size];

    for (int i = 0; i < size; i++)
        localPtr[i] = new int[2];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 2; j++) {
            localPtr[i][j] = 0;
        }
    }

    localPtr[0][0] = ptr[0];
    localPtr[0][1] = 1;

    for (int i = 1, j = 0; i < size; i++) {
        bool status = false;
        while (localPtr[j][0] != 0) {
            if (localPtr[j][0] == ptr[i]) {
                localPtr[j][1]++;
                status = true;
            }
            if (status)
                break;
            j++;
        }
        if (!status) {
            localPtr[j][0] = ptr[i];
            localPtr[j][1]++;
        }
        j = 0;
    }

    int mode, max;
    max = localPtr[0][1];
    mode = localPtr[0][0];

    for (int index = 1; index < size; index++) {
        if (max < localPtr[index][1]) {
            max = localPtr[index][1];
            mode = localPtr[index][0];
        }
    }

    for (int i = 0; i < size; i++) {
        delete[] localPtr[i];
        localPtr[i] = 0;
    }

    delete localPtr;
    localPtr = 0;

    return mode;
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