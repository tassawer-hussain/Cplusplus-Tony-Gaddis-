/*
	11. Book Club Points
	Serendipity Booksellers has a book club that awards points to its customers based on
	the number of books purchased each month. The points are awarded as follows:
	
	� If a customer purchases 0 books, he or she earns 0 points.
	� If a customer purchases 1 book, he or she earns 5 points.
	� If a customer purchases 2 books, he or she earns 15 points.
	� If a customer purchases 3 books, he or she earns 30 points.
	� If a customer purchases 4 or more books, he or she earns 60 points.

	Write a program that asks the user to enter the number of books that he or she has
	purchased this month and then displays the number of points awarded.
*/



#include <iostream>
using namespace std;

int main()
{
	int books;

	cout<<"Enter number of books you purchased in this month: ";
	cin>>books;

	if(books == 0)
		cout<<"You Eran 0 Points.\n\n";
	else if(books == 1)
		cout<<"You Eran 5 Points.\n\n";
	else if(books == 2)
		cout<<"You Eran 15 Points.\n\n";
	else if(books == 3)
		cout<<"You Eran 30 Points.\n\n";
	else
		cout<<"You Eran 60 Points.\n\n";

	return 0;
}
