//	2. Rainfall Statistics

/*	Write a program that lets the user enter the total rainfall for each of 12 months into an
	array of doubles. The program should calculate and display the total rainfall for the
	year, the average monthly rainfall, and the months with the highest and lowest amounts.
	Input Validation: Do not accept negative numbers for monthly rainfall ﬁgures.
*/


#include <iostream>
using namespace std;

int main() {
	double array[12], min, max, sum;
	int minIndex=0, maxIndex=0;

	for (int i =0; i<12; i++) {
		cout<<"Enter Rainfall for Month "<<i+1<<": ";
		cin>>array[i];
		while (array[i]<0) {
			cout<<"ERROR: Negative value is not accepted.\nAgain Enter Rainfall for Month "<<i+1<<": ";
			cin>>array[i];
		}
	}

	min = array[0];
	max = array[0];
	sum = 0.0;

	for (int i=0; i<12; i++) {
		if(array[i]>max) {
			max = array[i];
			maxIndex = i;
		}
		if(array[i]<min) {
			min = array[i];
			minIndex = i;
		}
		sum += array[i];
	}

	cout<<"\nTotal Rain Fall for the yaer: "<<sum;
	cout<<"\nAverage Monthly Rain Fall: "<<sum/12.0;
	cout<<"\nMinimum Rain Fall in month "<<minIndex+1<<" that is "<<min;
	cout<<"\nMaximum Rain Fall in month "<<maxIndex+1<<" that is "<<max;
	cout<<"\n\n";

	return 0;
}

