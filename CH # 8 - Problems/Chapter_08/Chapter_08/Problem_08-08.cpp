//	8. Search Benchmarks

/*	Write a program that has an array of at least 20 integers. It should call a function that
	uses the linear search algorithm to locate one of the values. The function should keep
	a count of the number of comparisons it makes until it ﬁnds the value. The program
	then should call a function that uses the binary search algorithm to locate the same
	value. It should also keep count of the number of comparisons it makes. Display these values on the screen.
*/


#include <iostream>
using namespace std;

// Function Prototype
void selectionSort(int [], int);
bool binarySearch(int [], int, int, int &);

int main() {
	int val, comp1=0,comp2=0, digit[20] = {12, 34, 54, 23, 11,
					2, 6, 9, 18, 16,
					37, 55, 22, 44, 66,
					42, 61, 72, 43, 91 };
	
	cout<<"Enter a number to search: ";
	cin>>val;

	for(int i=0; i<20; i++) {
		comp1++;
		if(digit[i] == val) {
			break;
		}
	}

	selectionSort(digit, 20);
	binarySearch(digit, 20, val, comp2);
	
	cout<<"\n";
	for(int i=0; i<20; i++) {
		cout<<digit[i]<<" ";
	}
	cout<<"\n\nComparison In Linear Search: "<<comp1;
	cout<<"\nComparison in Binary Search: "<<comp2;
	cout<<"\n\n";

	return 0;
}

bool binarySearch(int vec[], int size, int v, int &comp) {
	int start, mid, end;
	start = 0;
	end = size-1;
	bool found = false;

	while(!found && start<=end) {
		mid = (start+end)/2;

		comp++;
		if(vec[mid] == v)
			found = true;
		else if (vec[mid]>v)
			end = mid -1;
		else
			start = mid+1;
	}

	return found;
}

void selectionSort(int vec[], int size) {
	int min, minIndex;
	
	for (int i=0; i<size-1; i++) {
		min = vec[i];
		minIndex = i;
	
		for(int j=i+1; j<size; j++) {
			if(min>vec[j]) {
				min = vec[j];
				minIndex = j;
			}
		}

		vec [minIndex] = vec[i];
		vec[i] = min;
	}
}
