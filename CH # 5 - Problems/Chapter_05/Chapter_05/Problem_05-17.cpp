// 17. Sales Bar Chart

/*	Write a program that asks the user to enter today’s sales for ﬁve stores. The program
	should then display a bar graph comparing each store’s sales. Create each bar in the bar
	graph by displaying a row of asterisks. Each asterisk should represent $100 of sales.
	Here is an example of the program’s output. 
	Enter today's sales for store 1: 1000 [Enter]
	Enter today's sales for store 2: 1200 [Enter]
	Enter today's sales for store 3: 1800 [Enter]
	Enter today's sales for store 4: 800 [Enter]
	Enter today's sales for store 5: 1900 [Enter]
	
	SALES BAR CHART
	(Each * = $100)
	Store 1: **********
	Store 2: ************
	Store 3: ******************
	Store 4: ********
	Store 5: *******************

*/


#include <iostream>
using namespace std;

int main() {
	const int SIZE = 5;
	int sale[SIZE];
	for(int i = 0; i<SIZE; i++) {
		cout<<"Enter today's Sales for store "<<i+1<<": ";
		cin>>sale[i];
	}

	// Sales BAR CHAT (Each * = $100)
	cout<<"\n\n";
	for(int i=0; i<SIZE; i++) { 
		int remainder = sale[i]/100;
		cout<<"Store "<<i+1<<": ";
		for(int j=0; j<remainder; j++) {
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
