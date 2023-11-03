//	6. String Selection Sort

/*	Modify the selectionSort function presented in this chapter so it searches an array
	of strings instead of an array of ints. Test the function with a driver program. Use
	Program 8-8 as a skeleton to complete.
*/


// Program 8-8
#include <iostream>
#include <cstring>
using namespace std;

const int NUM_NAMES = 20, SIZE = 17;

// Function Prototype
void selectionSort(char [][SIZE], int );

 int main()
 {  
     char names[NUM_NAMES][SIZE] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                                    "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                                    "Taylor, Terri", "Johnson, Jill",
                                    "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
                                    "James, Jean", "Weaver, Jim", "Pore, Bob",
                                    "Rutherford, Greg", "Javens, Renee",
                                    "Harrison, Rose", "Setzer, Cathy",
                                    "Pike, Gordon", "Holland, Beth" };
     
	 // Insert your code to complete this program
	 selectionSort(names, NUM_NAMES);

	 for(int i=0; i<NUM_NAMES; i++)
		 cout<<names[i]<<endl;
	 return 0;
}

void selectionSort(char arr[][SIZE], int size) {
	int minIndex;
	char min[SIZE];
	
	for (int i=0; i<size-1; i++) {
		strcpy(min, arr[i]);
		minIndex = i;
	
		for(int j=i+1; j<size; j++) {
			if(strcmp(min, arr[j]) > 0) {
				strcpy(min, arr[j]);
				minIndex = j;
			}
		}

		strcpy(arr[minIndex], arr[i]);
		strcpy(arr[i], min);
	}

}