// 18. Population Bar Chart

/*	Write a program that produces a bar chart showing the population growth of Prai-
	rieville, a small town in the Midwest, at 20-year intervals during the past 100 years.
	The program should read in the population ﬁgures (rounded to the nearest 1,000 people)
	for 1900, 1920, 1940, 1960, 1980, and 2000 from a ﬁle. For each year it should display
	the date and a bar consisting of one asterisk for each 1,000 people. The data can
	be found in the people.dat ﬁle.

	Here is an example of how the chart might begin:
	PRAIRIEVILLE POPULATION GROWTH
	(each * represents 1,000 people)
	1900 **
	1920 ****
	1940 *****
*/


#include <iostream>
#include <fstream> // For File input
#include <cmath> // Can use for round the numbers
using namespace std;

int main() {
	const int SIZE = 5;
	ifstream fin;
	fin.open("Problem_05-18.txt");
	int population[SIZE];

	if(!fin) {
		cout<<"ERROR: File cannot open";
		return 0;
	}
	else {
		for(int i =0; i<SIZE; i++)
			fin>>population[i];
	}

	cout<<"\n\n";
	for (int i=0,j=1900; i<SIZE ; i++,j+=20) {
		cout<<j<<" ";
		int qoutient = population[i] / 1000;
		qoutient+= (population[i]%1000)>=500 ? 1 : 0; // Conditional operator
		for (int k=0; k<qoutient; k++) {
			cout<<"*";
		}
		cout<<"\n";
	}

	fin.close();
	return 0;
}
