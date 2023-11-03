//	8. Mode Function

/*	In statistics, the mode of a set of values is the value that occurs most often or with the
	greatest frequency. Write a function that accepts as arguments the following:
	A) An array of integers
	B) An integer that indicates the number of elements in the array
	The function should determine the mode of the array. That is, it should determine
	which value in the array occurs most often. The mode is the value the function should
	return. If the array has no mode (none of the values occur more than once), the function
	should return -1. (Assume the array will always contain nonnegative values.)
	Demonstrate your pointer prowess by using pointer notation instead of array notation in this function.
*/

#include <iostream>

using namespace std;

// Function Prototype
int mode(int * , int);
int findMode(int * , int);

int main() {
    int arrSize, * arrPtr;
    cout << "Enter Number of Elelments: ";
    cin >> arrSize;

    arrPtr = new int[arrSize];

    for (int i = 0; i < arrSize; i++) {
        cout << "Enter Value " << i + 1 << ": ";
        cin >> arrPtr[i];
    }

    cout << "\n\nMode of the set of values: " << findMode(arrPtr, arrSize);
    cout << "\n\n";

    delete[] arrPtr;
    arrPtr = 0;
    return 0;
}

int findMode(int * ptr, int size) {
    int ** localPtr;
    localPtr = new int * [size];

    for (int i = 0; i < size; i++)
        localPtr[i] = new int[2];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 2; j++) {
            localPtr[i][j] = 0;
        }
    }

    //	cout<<"\n\nAfet Initialize\n";
    //	for(int i=0; i<size; i++){
    //		for(int j=0; j<2; j++) {
    //			cout<<localPtr[i][j]<<" ";
    //		}
    //		cout<<"\n";
    //	}

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

    //	cout<<"\n\nAfet Calculating\n";
    //	for(int i=0; i<size; i++){
    //	 	for(int j=0; j<2; j++) {
    //			cout<<localPtr[i][j]<<" ";
    //		}
    //		cout<<"\n";
    //	}

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

//int mode(int *ptr, int size) {             // This will work for sorted array
//	int number = ptr[0];
//	int mode = number;
//	int count = 1;
//	int countMode = 1;
//
//	for (int i=1; i<size; i++)
//	{
//		if (ptr[i] == number) 
//			countMode++;	// count occurrences of the current number
//		else
//		{	// now this is a different number
//           if (count > countMode) 
//			{
//				countMode = count; // mode is the biggest ocurrences
//               mode = number;
//            }
//          count = 1; // reset count for the new number
//           number = ptr[i];
//		}
//	}
//	return mode;
//}

