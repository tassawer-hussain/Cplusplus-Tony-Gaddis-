//	19. Stock Proﬁt

/*	The proﬁt from the sale of a stock can be calculated as follows:
		Proﬁt = ((NS × SP) – SC) – ((NS × PP) + PC)
	where NS is the number of shares, SP is the sale price per share, SC is the sale commis-
	sion paid, PP is the purchase price per share, and PC is the purchase commission paid.
	If the calculation yields a positive value, then the sale of the stock resulted in a proﬁt.
	If the calculation yields a negative number, then the sale resulted in a loss.
	Write a function that accepts as arguments the number of shares, the purchase price
	per share, the purchase commission paid, the sale price per share, and the sale com-
	mission paid. The function should return the proﬁt (or loss) from the sale of stock.
	Demonstrate the function in a program that asks the user to enter the necessary data
	and displays the amount of the proﬁt or loss.
*/


#include <iostream>
using namespace std;

//Function Prototype
double saleCalculation(int &, double &, double &, double &, double &);

int main() {
	int no_share;
	double purchase_price, purchase_comm, sale_price, sale_comm, profit_loss;

	cout<<"Enter Number of Shares: ";
	cin>>no_share;
	while(no_share<0) {
		cout<<"ERROR: Share Cannot be less than 0. Enter Again: ";
		cin>>no_share;
	}

	cout<<"Enter Purchase Price of 1 Share: ";
	cin>>purchase_price;
	while(purchase_price<0) {
		cout<<"ERROR: Purchase Price Cannot be less than 0. Enter Again: ";
		cin>>purchase_price;
	}

	cout<<"Enter Purchase Commision Shares: ";
	cin>>purchase_comm;
	while(purchase_comm<0) {
		cout<<"ERROR: Purchase Commission Cannot be less than 0. Enter Again: ";
		cin>>purchase_comm;
	}

	cout<<"Enter Sale Price of 1 Share: ";
	cin>>sale_price;
	while(sale_price<0) {
		cout<<"ERROR: Sale Price Cannot be less than 0. Enter Again: ";
		cin>>sale_price;
	}

	cout<<"Enter Sale Commision Shares: ";
	cin>>sale_comm;
	while(sale_comm<0) {
		cout<<"ERROR: Sale Commission Cannot be less than 0. Enter Again: ";
		cin>>sale_comm;
	}

	profit_loss = saleCalculation(no_share, purchase_price, purchase_comm, sale_price, sale_comm);

	if(profit_loss<0) {
		cout<<"\n\n\nNumber Of Shares: "<<no_share;
		cout<<"\nPurchase Price per Share: "<<purchase_price;
		cout<<"\nPurchase Commission: "<<purchase_comm;
		cout<<"\nSale Price per Share: "<<sale_price;
		cout<<"\nSale Commission: "<<sale_comm;
		cout<<"\nLoss: "<<profit_loss;
		cout<<"\n\n";
	}
	else {
		cout<<"\n\n\nNumber Of Shares: "<<no_share;
		cout<<"\nPurchase Price per Share: "<<purchase_price;
		cout<<"\nPurchase Commission: "<<purchase_comm;
		cout<<"\nSale Price per Share: "<<sale_price;
		cout<<"\nSale Commission: "<<sale_comm;
		cout<<"\nProfit: "<<profit_loss;
		cout<<"\n\n";
	}

	return 0;
}

double saleCalculation(int & NS, double & PP, double & PC, double & SP, double & SC) {
	return ((NS * SP) - SC) - ((NS * PP) + PC);
}
