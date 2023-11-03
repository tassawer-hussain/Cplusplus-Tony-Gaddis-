/*
	21. Geometry Calculator
	Write a program that displays the following menu:
	Geometry Calculator
	1. Calculate the Area of a Circle
	2. Calculate the Area of a Rectangle
	3. Calculate the Area of a Triangle
	4. Quit

	Enter your choice (1-4):
	If the user enters 1, the program should ask for the radius of the circle and then display
	its area. Use the following formula:
	area = πr2
	Use 3.14159 for π and the radius of the circle for r. If the user enters 2, the program
	should ask for the length and width of the rectangle and then display the rectangle’s
	area. Use the following formula:
	area = length * width
	If the user enters 3 the program should ask for the length of the triangle’s base and its
	height, and then display its area. Use the following formula:
	area = base * height * .5

	If the user enters 4, the program should end.
	Input Validation: Display an error message if the user enters a number outside the range
	of 1 through 4 when selecting an item from the menu. Do not accept negative values for
	the circle’s radius, the rectangle’s length or width, or the triangle’s base or height.
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout<<"\n*********************************************";
	cout<<"\n*                                           *";
	cout<<"\n*            Geometry Calculator            *";
	cout<<"\n*                                           *";
	cout<<"\n*********************************************";
	cout<<"\n\n\tChoose an Option";
	cout<<"\n\t1. Calculate the Area of a Circle";
	cout<<"\n\t2. Calculate the Area of a Rectangle";
	cout<<"\n\t3. Calculate the Area of a Triangle";
	cout<<"\n\t4. Quit\n\n";
	
	int choice;
	cin>>choice;
	while(choice<1 || choice>4)
	{
		cout<<"\nError MSG!\nWrong option is Selected.\nPlease Choose wisely: ";
		cin>>choice;
	}

	switch(choice)
	{
		case 1:
			double radius;
			cout<<"\nEnter Radius of the circle: ";
			cin>>radius;
			while(radius<1) 
			{
				cout<<"\nError MSG!\nRadius must be greater then 0.\nPlease enter again: ";
				cin>>radius;
			}
			cout<<"\n\nRadius: "<<radius;
			cout<<"\nArea of the circle: "<<3.141519*radius*radius<<" square unit\n\n";
			break;
		
		case 2:
			double length, width;
			cout<<"\nEnter Length: ";
			cin>>length;
			while(length<1) 
			{
				cout<<"\nError MSG!\nLength must be greater then 0.\nPlease enter again: ";
				cin>>length;
			}
			cout<<"\nEnter Width: ";
			cin>>width;
			while(width<1) 
			{
				cout<<"\nError MSG!\nWidth must be greater then 0.\nPlease enter again: ";
				cin>>width;
			}
			cout<<"\n\nLength: "<<length;
			cout<<"\nWidth: "<<width;
			cout<<"\nArea of the Rectangle: "<<length * width<<" square unit.\n\n";
			break;

		case 3:
			double base, height;
			cout<<"\nEnter the Length of base: ";
			cin>>base;
			while(base<1) 
			{
				cout<<"\nError MSG!\nBase must be greater then 0.\nPlease enter again: ";
				cin>>base;
			}
			cout<<"\nEnter the Height: ";
			cin>>height;
			while(height<1) 
			{
				cout<<"\nError MSG!\nHeight must be greater then 0.\nPlease enter again: ";
				cin>>height;
			}
			cout<<"\n\nBase: "<<base;
			cout<<"\nHeight: "<<height;
			cout<<"\nArea of the Triangle: "<<base * height * 0.5<<" square unit.\n\n";
			break;

		case 4:
			cout<<"\n\nProgamme is going to terminate.\nTerminated. . . . . . . .\n\n";
			break;
	}

	return 0;
}
