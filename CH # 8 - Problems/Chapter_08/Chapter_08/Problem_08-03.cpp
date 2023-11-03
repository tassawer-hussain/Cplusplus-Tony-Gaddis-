//	3. Lottery Winners Modiﬁcation

/*	Modify the program you wrote for Programming Challenge 2 (Lottery Winners) so it
	performs a binary search instead of a linear search.
*/


#include <iostream>
#include <vector>
using namespace std;

// Function Prototype
void selectionSort(vector<int>);
bool binarySearch(vector<int>, int);

int main() {
	vector<int> userLottery;
	userLottery.push_back(13579);
	userLottery.push_back(26791);
	userLottery.push_back(26792);
	userLottery.push_back(33445);
	userLottery.push_back(55555);
	userLottery.push_back(62483);
	userLottery.push_back(77777);
	userLottery.push_back(79422);
	userLottery.push_back(85647);
	userLottery.push_back(93121);

	// sort the array
	selectionSort(userLottery);

	int lotNumber;
	cout<<"Enter 5 digit lottery number of this week: ";
	cin>>lotNumber;

	if(binarySearch(userLottery,lotNumber))
		cout<<"\nYou Win lottery.\n\n";
	else
		cout<<"\nYou did not win lottery.\n\n";

	return 0;
}

bool binarySearch(vector<int> vec, int val) {
	int size, start, mid, end;
	size = vec.size();
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

void selectionSort(vector<int> vec) {
	int min, minIndex, size = vec.size();
	
	for (int i=0; i<size-1; i++) {
		min = vec.at(i);
		minIndex = i;
	
		for(int j=i+1; j<size; j++) {
			if(min>vec.at(j)) {
				min = vec.at(j);
				minIndex = j;
			}
		}

		vec [minIndex] = vec[i];
		vec[i] = min;
	}
}
