//	3. Chips and Salsa

/*	Write a program that lets a maker of chips and salsa keep track of sales for ﬁve different
	types of salsa: mild, medium, sweet, hot, and zesty. The program should use two parallel
	5-element arrays: an array of strings that holds the ﬁve salsa names and an array
	of integers that holds the number of jars sold during the past month for each
	salsa type. The salsa names should be stored using an initialization list at the time the
	name array is created. The program should prompt the user to enter the number of
	jars sold for each type. Once this sales data has been entered, the program should produce
	a report that displays sales for each salsa type, total sales, and the names of the highest
	selling and lowest selling products.

	Input Validation: Do not accept negative values for number of jars sold.
*/


#include <iostream>
using namespace std;

int main() {
	char salsa[5][7] = {"Mild","Medium","Sweet","Hot","Zesty"};
	int jarsSold[5], minIndex=0, min, maxIndex=0, max, sum;

	for (int i=0; i<5; i++) {
		cout<<"Enter the number of Jars Sold for "<<salsa[i]<<" Salsa in previous month: ";
		cin>>jarsSold[i];
		while (jarsSold[i]<0) {
			cout<<"ERROR: Negative value is not accepted. Please Enter Again: ";
			cin>>jarsSold[i];
		}
	}

	min = jarsSold[0];
	max = jarsSold[0];
	sum = 0;

	for (int i=0; i<5; i++) {
		if(jarsSold[i]>max) {
			max = jarsSold[i];
			maxIndex = i;
		}
		if(jarsSold[i]<min) {
			min = jarsSold[i];
			minIndex = i;
		}
		sum += jarsSold[i];
	}

	for (int i=0; i<5; i++) {
		cout<<"\nJars Sold for "<<salsa[i]<<" Salsa in previous month: "<<jarsSold[i];
	}

	cout<<"\nTotal Jars Sold: "<<sum;
	cout<<"\nMinimum Jars Sold for "<<salsa[minIndex]<<" Salsa that is "<<min;
	cout<<"\nMaximum Jars Sold for "<<salsa[maxIndex]<<" Salsa that is "<<max;
	cout<<"\n\n";
	return 0;
}
