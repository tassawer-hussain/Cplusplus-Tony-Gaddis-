//	5. Rainfall Statistics Modiﬁcation

/*	Modify the Rainfall Statistics program you wrote for Programming Challenge 2 of
	Chapter 7. The program should display a list of months, sorted in order of rainfall,
	from highest to lowest.

	2. Rainfall Statistics
	write a program that lets the user enter the total rainfall for each of 12 months into an
	array of doubles. The program should calculate and display the total rainfall for the
	year, the average monthly rainfall, and the months with the highest and lowest amounts.
	Input Validation: Do not accept negative numbers for monthly rainfall ﬁgures.
*/


#include <iostream>
using namespace std;

// Function Prototype
void selectionSort(int [], int [], int);

int main() {
	int month[12];
	int index[12];
	
	for (int i =0; i<12; i++) {
		cout<<"Enter Rainfall for Month "<<i+1<<": ";
		cin>>month[i];
		index[i] = i;
		while (month[i]<0) {
			cout<<"ERROR: Negative value is not accepted.\nAgain Enter Rainfall for Month "<<i+1<<": ";
			cin>>month[i];
		}
	}

	// Call sorting function
	selectionSort(month, index, 12);

	for ( int i=0; i<12; i++) 
		cout<<"\nRain Fall in Month "<<index[i]+1<<": "<<month[i];
	
	cout<<"\n\n\n";
	return 0;
}

void selectionSort(int vec[], int ind[], int size) {
	int max, maxIndex, tempId;
 
	for (int i=0; i<size-1; i++) {
		max = vec[i];
		maxIndex = i;
	
		for(int j=i+1; j<size; j++) {
			if(max<vec[j]) {
				max = vec[j];
				maxIndex = j;
				tempId = ind[j];
			}
		}

		vec [maxIndex] = vec[i];
		vec[i] = max;
		// swap index for Moth
		ind[maxIndex] = ind[i];
		ind[i] = tempId;
	}
}
