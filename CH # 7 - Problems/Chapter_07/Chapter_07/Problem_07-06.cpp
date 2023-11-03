//	6. Number Analysis Program

/*	Write a program that asks the user for a ﬁle name. Assume the ﬁle contains a series of
	numbers, each written on a separate line. The program should read the contents of the
	ﬁle into an array and then display the following data:
	• The lowest number in the array
	• The highest number in the array
	• The total of the numbers in the array
	• The average of the numbers in the array
	The Student CD contains a text ﬁle named numbers.txt. that you can use to test the program.
*/


#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin;
	char filename[30];
	int number[100], count=0, min, max, sum=0;

	cout<<"Enter the Name of the File: ";
	cin.getline(filename,30);

	fin.open(filename);
	
	if(!fin) {
		cout<<"ERROR: File is not opened. Programmr is terminating.\n\n";
		return 0;
	}

	while(fin>>number[count]) {
		sum = sum + number[count];
		count++;
	}

	min=number[0];
	max=number[0];
	
	for(int i=1; i<count; i++) {
		if(min > number[i])
			min = number[i];
		
		if(max < number[i])
			max = number[i];
	}

	fin.close();

	cout<<"\n\nTotal Number in File are: "<<count;
	cout<<"\nMinimum Number is: "<<min;
	cout<<"\nMaximum Number is: "<<max;
	cout<<"\nTotal Sum: "<<sum;
	cout<<"\nAverage of the number: "<<sum/static_cast<double>(count);
	cout<<"\n\n";
	return 0;
}
