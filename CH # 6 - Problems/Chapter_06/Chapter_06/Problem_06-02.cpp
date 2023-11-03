//	2. Rectangle Area�Complete the Program

/*	The Student CD contains a partially written program named AreaRectangle.cpp.
	Your job is to complete the program. When it is complete, the program will ask the
	user to enter the width and length of a rectangle, and then display the rectangle�s area.
	The program calls the following functions, which have not been written:
	
	� getLength � This function should ask the user to enter the rectangle's length, and
	then return that value as a double.

	� getWidth - This function should ask the user to enter the rectangle's width, and
	then return that value as a double.

	� getArea � This function should accept the rectangle's length and width as arguments,
	and return the rectangle's area. The area is calculated by multiplying the length by the width.

	� displayData � This function should accept the rectangle's length, width, and
	area as arguments, and display them in an appropriate message on the screen.
*/


#include <iostream>
using namespace std;

// Function Prototype
double getLength();
double getWidth();
double getArea(const double&, const double&);
void displayData(const double&, const double&, const double&);

int main() {
	double len, width, Area;
	len = getLength();
	width = getWidth();
	Area = getArea(len, width);
	displayData(len, width, Area);

	return 0;
}

double getLength() {
	double len;
	cout<<"Enter Length: ";
	cin>>len;
	return len;
}

double getWidth() {
	double width;
	cout<<"Enter Width: ";
	cin>>width;
	return width;
}

double getArea(const double& l, const double& w) {
	return l*w;
}

void displayData(const double& le, const double& wid, const double& area) {
	cout<<"\n\nRectangle\'s Length: "<<le;
	cout<<"\nRectangle\'s Width: "<<wid;
	cout<<"\nRectangle\'s Area: "<<area<<endl;
}
