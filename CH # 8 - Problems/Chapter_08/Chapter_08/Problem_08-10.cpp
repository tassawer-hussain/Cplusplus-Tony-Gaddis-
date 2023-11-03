//	10. Sorting Orders

/*	Write a program that uses two identical arrays of just eight integers. It should display
	the contents of the ﬁrst array, then call a function to sort the array using an ascending
	order bubble sort modiﬁed to print out the array contents after each pass of the sort.
	Next, the program should display the contents of the second array, then call a function
	to sort the array using an ascending order selection sort modiﬁed to print out the array
	contents after each pass of the sort.
*/

#include <iostream>

using namespace std;

// Function Prototype
void bubbleSort(int[], int);
void selectionSort(int[], int);

int main() {
    int value1[8] = {
        12,
        73,
        34,
        15,
        56,
        67,
        71,
        89
    };
    int value2[8] = {
        12,
        73,
        34,
        15,
        56,
        67,
        71,
        89
    };

    bubbleSort(value1, 8);
    selectionSort(value2, 8);
    cout << "\n\n";

    return 0;
}

void bubbleSort(int array[], int size) {
    cout << "Bubble Sort\n";
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";

    bool swap;
    int temp, sw = 1;
    do {
        swap = false;
        for (int count = 0; count < (size - 1); count++) {
            if (array[count] > array[count + 1]) {
                temp = array[count];
                array[count] = array[count + 1];
                array[count + 1] = temp;
                swap = true;

                cout << "\nSwap " << sw << ": ";
                for (int i = 0; i < size; i++)
                    cout << array[i] << " ";
                sw++;
            }
        }
    } while (swap);
}

void selectionSort(int array[], int size) {
    int startScan, minIndex, minValue, swap = 1;

    cout << "\n\n\nSelection Sort\n";
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";

    for (startScan = 0; startScan < (size - 1); startScan++) {
        minIndex = startScan;
        minValue = array[startScan];
        for (int index = startScan + 1; index < size; index++) {
            if (array[index] < minValue) {
                minValue = array[index];
                minIndex = index;
            }
        }
        array[minIndex] = array[startScan];
        array[startScan] = minValue;

        if (minIndex != startScan) {
            cout << "\nSwap " << swap << ": ";
            for (int i = 0; i < size; i++)
                cout << array[i] << " ";
            swap++;
        }
    }
}