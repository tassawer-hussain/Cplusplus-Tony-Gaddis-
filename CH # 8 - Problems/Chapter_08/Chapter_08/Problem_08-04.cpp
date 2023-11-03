//	4. Charge Account Validation Modiﬁcation

/*	Modify the program you wrote for Problem 1 (Charge Account Validation) so it per-
	forms a binary search to locate valid account numbers. Use the selection sort algorithm
	to sort the array before the binary search is performed.
*/


#include <iostream>
#include <vector>
using namespace std;

// Function Prototype
void selectionSort(int [], int);
bool binarySearch(int [], int, int);

int main () {
	int account[18] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
						8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
						1005231, 6545231, 3852085, 7576651, 7881200, 4581002};

	int userNum;
	cout<<"Enter Your Charge Account Number: ";
	cin>>userNum;

	selectionSort(account, 18);
	if(binarySearch(account, 18, userNum)) {
		cout<<"\n\nYou enter a Valid Number.\n\n";
		return 0;
	}

	cout<<"\n\nYou enter an Invalid Number.\n\n";
	return 0;
}

bool binarySearch(int vec[], int size, int val) {
	int start, mid, end;
	start = 0;
	end = size-1;
	bool found =false;

	while(!found && start<=end) {
		mid = (start+end)/2;
		if(vec[mid] == val)
			found = true;
		else if (vec[mid]>val)
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
