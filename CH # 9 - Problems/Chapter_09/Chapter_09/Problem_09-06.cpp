//	6. Case Study Modiﬁcation #1

/*	Modify Program 9-17 (the United Cause case study program) so it can be used with
	any set of donations. The program should dynamically allocate the donations array
	and ask the user to input its values.
*/

// This program shows the donations made to the United Cause
// by the employees of CK Graphics, Inc. It displays
// the donations in order from lowest to highest
// and in the original order they were received.
#include <iostream>

using namespace std;

// Function prototypes
void arrSelectSort(int * , int);
void showArray(int * , int);

int main() {
    int arrSize; // Number of donations
    cout << "Enter the number of donations: ";
    cin >> arrSize;

    int * ptr;
    ptr = new int[arrSize];

    // An array containing the donation amounts.
    for (int i = 0; i < arrSize; i++) {
        cout << "Enter Donation " << i + 1 << ": ";
        cin >> ptr[i];
    }

    // Display the donations in their original order.
    cout << "The donations, in their original order, are: \n";
    showArray(ptr, arrSize);

    // Sort the elements of the array of pointers.
    arrSelectSort(ptr, arrSize);

    // Display the donations using the array of pointers. This
    // will display them in sorted order.
    cout << "The donations, sorted in ascending order, are: \n";
    showArray(ptr, arrSize);

    delete[] ptr;
    ptr = 0;

    return 0;
}

//****************************************************************
// Definition of function arrSelectSort.                         *
// This function performs an ascending order selection sort on   *
// arr, which is an array of pointers. Each element of arr       *
// points to an element of a second array. After the sort,       *
// arr will point to the elements of the second array in         *
// ascending order.                                              *
//****************************************************************

void arrSelectSort(int * arr, int size) {
    int startScan, minIndex;
    int minElem;

    for (startScan = 0; startScan < (size - 1); startScan++) {
        minIndex = startScan;
        minElem = arr[startScan];
        for (int index = startScan + 1; index < size; index++) {
            if (arr[index] < minElem) {
                minElem = arr[index];
                minIndex = index;
            }
        }
        arr[minIndex] = arr[startScan];
        arr[startScan] = minElem;
    }
}

//*************************************************************
// Definition of function showArray.                          *
// This function displays the contents of arr. size is the    *
// number of elements.                                        *
//*************************************************************

void showArray(int * arr, int size) {
    for (int count = 0; count < size; count++)
        cout << arr[count] << " ";
    cout << endl;
}