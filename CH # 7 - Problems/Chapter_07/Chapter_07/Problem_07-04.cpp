//	4. Monkey Business

/*	A local zoo wants to keep track of how many pounds of food each of its three monkeys
	eats each day during a typical week. Write a program that stores this information
	in a two-dimensional 3 × 7 array, where each row represents a different monkey and
	each column represents a different day of the week. The program should ﬁrst have the
	user input the data for each monkey. Then it should create a report that includes the following information:

	• Average amount of food eaten per day by the whole family of monkeys.
	• The least amount of food eaten during the week by any one monkey.
	• The greatest amount of food eaten during the week by any one monkey.
	
	Input Validation: Do not accept negative numbers for pounds of food eaten.
*/


#include <iostream> 
using namespace std;

int main() {
	int array[3][7], sum=0, min, max;

	for(int i=0; i<3; i++) {
		cout<<"Enter Food eaten by Monkey "<<i+1<<":\n";
		for(int j=0; j<7; j++) {
			cout<<"Day "<<j+1<<": ";
			cin>>array[i][j];
		}
	}

	min = array[0][0];
	max = array[0][0];
	
	for(int i=0; i<3; i++) {
		for(int j=0; j<7; j++) {
			sum = sum + array[i][j];

			if(min>array[i][j])
				min=array[i][j];

			if(max<array[i][j])
				max = array[i][j];
		}
	}

	cout<<"\n\n";
	for(int i=0; i<3; i++) {
		cout<<"Food eaten by Monkey "<<i+1<<":\n";
		for(int j=0; j<7; j++) {
			cout<<array[i][j]<<", ";
		}
		cout<<endl;
	}

	cout<<"\n\nAverage amount of food eaten per day by the whole family of monkeys: "<<sum/21.0;
	cout<<"\nThe least amount of food eaten during the week by any one monkey: "<<min;
	cout<<"\nThe greatest amount of food eaten during the week by any one monkey: "<<max;
	cout<<"\n\n";
	return 0;
}
