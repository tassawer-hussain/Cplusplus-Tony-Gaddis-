// Problem 05: Box Office
// A movie theater only keeps a percentage of the revenue earned from ticket sales. The
// remainder goes to the movie distributor. Write a program that calculates a theater�s
// gross and net box office profit for a night. The program should ask for the name of
// the movie, and how many adult and child tickets were sold. (The price of an adult
// ticket is $6.00 and a child�s ticket is $3.00.) It should display a report similar to

// Movie Name: �Wheels of Fury�
// Adult Tickets Sold: 382
// Child Tickets Sold: 127
// Gross Box Office Profit: $ 2673.00
// Net Box Office Profit: $ 534.60
// Amount Paid to Distributor: $ 2138.40
//
// NOTE: Assume the theater keeps 20 percent of the gross box office profit.


#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	// const declaration
	const double adultTicket = 6.00,
		childTicket = 3.00,
		theaterProfitRatio = 0.20;

	// array for movie name
	const int size = 50;
	char movieName[size];

	// Variable declaration
	double adultTicketSold, childTicketSold, grossProfit, netProfit, distAmount;


	// Take Input
	cout<<"Enter the Name Of the Movie: ";
	cin.getline(movieName, size);

	cout<<"Enter How Many Adult's Ticket Sold: ";
	cin>>adultTicketSold;

	cout<<"Enter How Many Child's Ticket Sold: ";
	cin>>childTicketSold;

	// Calculation
	grossProfit = adultTicket * adultTicketSold + childTicket * childTicketSold;
	netProfit = grossProfit * theaterProfitRatio;
	distAmount = grossProfit - netProfit;

	// Show Output
	cout<<endl<<endl<<endl;
	cout << setprecision(2) << fixed << showpoint;
	cout<<"Movie Name: \""<<movieName<<"\"\n";
	cout<<"Adult Tickets Sold: "<<adultTicketSold<<endl;
	cout<<"Child Tickets Sold: "<<childTicketSold<<endl;
	cout<<"Gross Box Office Profit: $"<<grossProfit<<endl;
	cout<<"Net Box Office Profit: $"<<netProfit<<endl;
	cout<<"Amount Paid to Distributor: $"<<distAmount<<endl;
	cout<<endl;

	return 0;
}
