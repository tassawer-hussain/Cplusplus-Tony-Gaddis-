//	9. Sorting Benchmarks

/*	Write a program that uses two identical arrays of at least 20 integers. It should call a
	function that uses the bubble sort algorithm to sort one of the arrays in ascending
	order. The function should keep a count of the number of exchanges it makes. The
	program then should call a function that uses the selection sort algorithm to sort the
	other array. It should also keep count of the number of exchanges it makes. Display
	these values on the screen.
*/

#include <iostream>

using namespace std;

// Function Prototype
void bubbleSort(int[], int, int & );
void selectionSort(int[], int, int & );

int main() {
    int value1[20] = {
        12,
        73,
        34,
        15,
        56,
        67,
        71,
        89,
        90,
        11,
        22,
        93,
        44,
        50,
        86,
        10,
        62,
        63,
        89,
        78
    };

    int value2[20] = {
        12,
        73,
        34,
        15,
        56,
        67,
        71,
        89,
        90,
        11,
        22,
        93,
        44,
        50,
        86,
        10,
        62,
        63,
        89,
        78
    };

    int exchange1 = 0, exchange2 = 0;
    bubbleSort(value1, 20, exchange1);
    for (int i = 0; i < 20; i++)
        cout << value1[i] << " ";

    cout << "\n";
    selectionSort(value2, 20, exchange2);
    for (int i = 0; i < 20; i++)
        cout << value2[i] << " ";
    cout << "\n";

    cout << "\nBubble Sort Exchange: " << exchange1;
    cout << "\nSelection Sort Exchange: " << exchange2;
    cout << "\n\n";

    return 0;
}

void bubbleSort(int array[], int size, int & ex) {
    bool swap;
    int temp;
    do {
        swap = false;
        for (int count = 0; count < (size - 1); count++) {
            if (array[count] > array[count + 1]) {
                ex++;
                temp = array[count];
                array[count] = array[count + 1];
                array[count + 1] = temp;
                swap = true;
            }
        }
    } while (swap);
}

void selectionSort(int array[], int size, int & ex) {
    int startScan, minIndex, minValue;
    for (startScan = 0; startScan < (size - 1); startScan++) {
        minIndex = startScan;
        minValue = array[startScan];
        for (int index = startScan + 1; index < size; index++) {
            if (array[index] < minValue) {
                minValue = array[index];
                minIndex = index;
            }
        }

        if (minIndex != startScan)
            ex++;
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
    }
}