//	9. Quarterly Sales Statistics

/*	Write a program that lets the user enter four quarterly sales ﬁgures for six divisions of
	a company. The ﬁgures should be stored in a two-dimensional array. Once the ﬁgures
	are entered, the program should display the following data for each quarter:

	• A list of the sales figures by division
	• Each division’s increase or decrease from the previous quarter (This will not be displayed for the first quarter.)
	• The total sales for the quarter
	• The company’s increase or decrease from the previous quarter (This will not be displayed for the first quarter.)
	• The average sales for all divisions that quarter
	• The division with the highest sales for that quarter

	The program should be modular, with functions that calculate the statistics above.
	Input Validation: Do not accept negative numbers for sales ﬁgures.
*/


#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	int sale[6][4], quarter_total[4], sum=0, high, h_index;

	cout<<"Enter the Sale Figures\n";

	for(int i =0; i<6; i++) {
		for(int j=0; j<4; j++) {
			cout<<"For Division "<<i+1<<" Quarter "<<j+1<<": ";
			cin>>sale[i][j];
		}
	}

	cout<<"\n\n\nDivision\t1st\t2nd\t3rd\t4th\n";
	for(int i =0; i<6; i++) {
		cout<<i+1<<"\t\t";
		for(int j=0; j<4; j++) {
			cout<<setw(2)<<sale[i][j]<<"\t";
		}
		cout<<endl;
	}

	cout<<"\n       Increase Or Decrease From the Previous";
	cout<<"\nDivision\t1st\t2nd\t3rd\t4th\n";
	for(int i =0; i<6; i++) {
		cout<<i+1<<"\t\t"<<setw(2)<<"0\t";
		for(int j=1; j<4; j++) {
			cout<<setw(2)<<(sale[i][j]-sale[i][j-1])<<"\t";
		}
		cout<<endl;
	}

	for(int j=0; j<4; j++) {
		for(int i=0; i<6; i++) {
			sum = sum + sale[i][j];
		}
		quarter_total[j] = sum;
		sum = 0;
	}

	cout<<"Total \t\t";
	for(int i=0; i<4; i++) 
		cout<<setw(2)<<quarter_total[i]<<"\t";
	
	cout<<"\nQ_Inc_Dec\t"<<setw(2)<<"0\t";
	for(int i=1; i<4; i++) 
		cout<<setw(2)<<(quarter_total[i]-quarter_total[i-1])<<"\t";

	cout<<"\nQ_Avg_Sale\t";
	for(int i=0; i<4; i++) 
		cout<<setw(2)<<(quarter_total[i]/6.0)<<"\t";

	cout<<"\nQ_High_Sale\t";
	for(int j=0; j<4; j++) {
		high = sale[0][j];
		h_index = 0;
		for(int i=1; i<6; i++) {
			if(high < sale[i][j]) {
				high = sale[i][j];
				h_index=i;
			}
		}
		cout<<setw(2)<<h_index+1<<"\t";
	}
	cout<<"\n\n\n";
	return 0;
}
