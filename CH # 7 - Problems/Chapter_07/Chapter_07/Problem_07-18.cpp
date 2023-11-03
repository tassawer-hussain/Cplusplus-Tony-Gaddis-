//	18. 2D Array Operations

/*	Write a program that creates a two-dimensional array initialized with test data. Use
	any data type you wish. The program should have the following functions:

	� getTotal. This function should accept a two-dimensional array as its argument and return the
		total of all the values in the array.
	� getAverage. This function should accept a two-dimensional array as its argument and return the
		average of all the values in the array.
	� getRowTotal. This function should accept a two-dimensional array as its first argument and
		an integer as its second argument. The second argument should be the subscript of a row in the array.
		The function should return the total of the values in the specified row. 
	� getColumnTotal. This function should accept a two-dimensional array as its first argument and
		an integer as its second argument. The second argument should be the subscript of a column in the array.
		The function should return the total of the values in the specified column. 
	� getHighestInRow. This function should accept a two-dimensional array as its first argument and an integer
		as its second argument. The second argument should be the subscript of a row in the array. The function
		should return the highest value in the specified row of the array. 
	� getLowestInRow. This function should accept a two-dimensional array as its first argument and an integer
		as its second argument. The second argument should be the subscript of a row in the array. The function
		should return the lowest value in the specified row of the array. 
	Demonstrate each of the functions in this program.
*/


#include <iostream>
using namespace std;

// Const Declaration
const int ROW = 5;
const int COLUMN = 8;

// Function Prototype
int getTotal(int [][COLUMN]);
int getAverage(int [][COLUMN]);
int getRowTotal(int [][COLUMN], int);
int getColumnTotal(int [][COLUMN], int);
int getHighestInRow(int [][COLUMN], int);
int getLowestInRow(int [][COLUMN], int);

int main() {

	int data[ROW][COLUMN] = { {1,2,3,4,5,6,7,8},
								{11,12,13,14,15,16,17,18},
								{21,22,23,24,25,26,27,28},
								{31,32,33,34,35,36,37,38},
								{41,42,43,44,45,46,47,48}};

	cout<<"Total Sum: "<<getTotal(data);
	cout<<"\nAverage: "<<getAverage(data);
	cout<<"\nRow Total: "<<getRowTotal(data, 3);
	cout<<"\nColumn Total: "<<getColumnTotal(data,3);
	cout<<"\nHighest In Row: "<<getHighestInRow(data, 4);
	cout<<"\nLowest In Row: "<<getLowestInRow(data, 4);
	cout<<"\n\n";

	return 0;
}

int getTotal(int arr[][COLUMN]) {
	int total=0;

	for(int i=0; i<ROW; i++) {
		for(int j=0; j<COLUMN; j++)
			total += arr[i][j];
	}

	return total;
}

int getAverage(int arr[][COLUMN]) {
	int total=0;

	for(int i=0; i<ROW; i++) {
		for(int j=0; j<COLUMN; j++)
			total += arr[i][j];
	}

	return total/(ROW*COLUMN); // 1st get the sum then divide the sum by number of entries
}

int getRowTotal(int arr[][COLUMN], int r) {
	int rowTotal=0;

	for(int i=0; i<COLUMN; i++)
		rowTotal = rowTotal + arr[r][i];

	return rowTotal;
}

int getColumnTotal(int arr[][COLUMN], int c) {
	int colTotal=0;

	for(int i=0; i<ROW; i++)
		colTotal = colTotal + arr[i][c]; 

	return colTotal;
}

int getHighestInRow(int arr[][COLUMN], int r) {
	int highest = arr[r][0];

	for(int i=1; i<COLUMN; i++) {
		if (highest < arr[r][i])
			highest = arr[r][i];
	}

	return highest;
}

int getLowestInRow(int arr[][COLUMN], int r) {
	int lowest = arr[r][0];

	for(int i=1; i<COLUMN; i++) {
		if (lowest > arr[r][i])
			lowest = arr[r][i];
	}

	return lowest;
}
