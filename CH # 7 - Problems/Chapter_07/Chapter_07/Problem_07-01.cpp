//	1. Largest/Smallest Array Values

/*	Write a program that lets the user enter 10 values into an array. The program should
	then display the largest and smallest values stored in the array.
*/


#include <iostream>
using namespace std;

int main() {
	int array[10], min, max;

	for (int i =0; i<10; i++) {
		cout<<"Enter Value "<<i+1<<": ";
		cin>>array[i];
	}

	min = array[0];
	max = array[0];

	for (int i=1; i<10; i++) {
		if(array[i]>max)
			max = array[i];
		if(array[i]<min)
			min = array[i];
	}

	cout<<"\nMinimum value is "<<min;
	cout<<"\nMaximum value is "<<max;
	cout<<"\n\n";

	return 0;
}
