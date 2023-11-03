//	2.  Lottery Winners

/*	A lottery ticket buyer purchases 10 tickets a week, always playing the same 10 5-digit
	�lucky� combinations. Write a program that initializes an array or a vector with
	these numbers and then lets the player enter this week�s winning 5-digit number. The
	program should perform a linear search through the list of the player�s numbers and
	report whether or not one of the tickets is a winner this week. Here are the numbers:
		13579  26791  26792  33445  55555
		62483  77777  79422  85647  93121
*/


#include <iostream>
#include <vector>
using namespace std;

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

	int size = userLottery.size();
	int lotNumber;
	cout<<"Enter 5 digit lottery number of this week: ";
	cin>>lotNumber;

	for (int i=0; i<size; i++) {
		if(lotNumber == userLottery.at(i)) {
			cout<<"\nYou Win lottery.\n\n";
			return 0;
		}
	}

	cout<<"\nYou did not win lottery.\n\n";
	return 0;
}
