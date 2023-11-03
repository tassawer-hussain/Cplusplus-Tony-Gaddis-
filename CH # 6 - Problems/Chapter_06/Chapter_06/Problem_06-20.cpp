//	20. Multiple Stock Sales

/*	Use the function that you wrote for Programming Challenge 19 (Stock Proﬁt) in a
	program that calculates the total proﬁt or loss from the sale of multiple stocks. The
	program should ask the user for the number of stock sales, and the necessary data for
	each stock sale. It should accumulate the proﬁt or loss for each stock sale and then display the total.
*/


#include <iostream>
using namespace std;

//Function Prototype
double saleCalculation(int &, double &, double &, double &, double &);

int main() {
	int no_share, no_stock;
	double purchase_price, purchase_comm, sale_price, sale_comm, profit_loss, accumulated_PL=0.0;

	cout<<"Enter how many stock do you have: ";
	cin>>no_stock;
	while(no_stock<0) {
		cout<<"ERROR: Stock Cannot be less than 0. Enter Again: ";
		cin>>no_stock;
	}
	
	for(int i=1; i<=no_stock; i++) {
		cout<<"\n\n\tStock "<<i;	
		cout<<"\nEnter Number of Shares for stock "<<i<<": ";
		cin>>no_share;
		while(no_share<0) {
			cout<<"ERROR: Share Cannot be less than 0. Enter Again: ";
			cin>>no_share;
		}

		cout<<"Enter Purchase Price of 1 Share for stock "<<i<<": ";
		cin>>purchase_price;
		while(purchase_price<0) {
			cout<<"ERROR: Purchase Price Cannot be less than 0. Enter Again: ";
			cin>>purchase_price;
		}

		cout<<"Enter Purchase Commision Shares for stock "<<i<<": ";
		cin>>purchase_comm;
		while(purchase_comm<0) {
			cout<<"ERROR: Purchase Commission Cannot be less than 0. Enter Again: ";
			cin>>purchase_comm;
		}

		cout<<"Enter Sale Price of 1 Share for stock "<<i<<": ";
		cin>>sale_price;
		while(sale_price<0) {
			cout<<"ERROR: Sale Price Cannot be less than 0. Enter Again: ";
			cin>>sale_price;
		}

		cout<<"Enter Sale Commision Shares for stock "<<i<<": ";
		cin>>sale_comm;
		while(sale_comm<0) {
			cout<<"ERROR: Sale Commission Cannot be less than 0. Enter Again: ";
			cin>>sale_comm;
		}

		profit_loss = saleCalculation(no_share, purchase_price, purchase_comm, sale_price, sale_comm);
		accumulated_PL += profit_loss;

		if(profit_loss<0) {
			cout<<"\n\nNumber Of Shares: "<<no_share;
			cout<<"\nPurchase Price per Share: "<<purchase_price;
			cout<<"\nPurchase Commission: "<<purchase_comm;
			cout<<"\nSale Price per Share: "<<sale_price;
			cout<<"\nSale Commission: "<<sale_comm;
			cout<<"\nLoss: "<<profit_loss;
			cout<<"\n";
		}
		else {
			cout<<"\n\nNumber Of Shares: "<<no_share;
			cout<<"\nPurchase Price per Share: "<<purchase_price;
			cout<<"\nPurchase Commission: "<<purchase_comm;
			cout<<"\nSale Price per Share: "<<sale_price;
			cout<<"\nSale Commission: "<<sale_comm;
			cout<<"\nProfit: "<<profit_loss;
			cout<<"\n";
		}
	}

	if (accumulated_PL>0)
		cout<<"\n\nThe Accumulted Profit: "<<accumulated_PL<<endl<<endl;
	else
		cout<<"\n\nThe Accumulted Loss: "<<accumulated_PL<<endl<<endl;

	return 0;
}

double saleCalculation(int & NS, double & PP, double & PC, double & SP, double & SC) {
	return ((NS * SP) - SC) - ((NS * PP) + PC);
}
