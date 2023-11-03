/*
	4. Areas of Rectangles
	The area of a rectangle is the rectangle�s length times its width. Write a program that
	asks for the length and width of two rectangles. The program should tell the user
	which rectangle has the greater area, or if the areas are the same.
*/



#include <iostream>
using namespace std;

int main()
{
	double length1, length2, width1, width2, area1, area2;

	cout<<"Enter Length and Width of rectangle 1: ";
	cin>> length1>>width1;
	area1 = length1 * width1;

	cout<<"Enter Length and Width of rectangle 2: ";
	cin>> length2>>width2;
	area2 = length2 * width2;

	if(area1 > area2)
	{
		cout<<"Reactangle with Length: "<<length1<<" and Width: "<<width1<<" is greater.\n\n";
	}
	else
	{
		cout<<"Reactangle with Length: "<<length2<<" and Width: "<<width2<<" is greater.\n\n";
	}

	return 0;
}
