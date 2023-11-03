// Problem 024: Stock Transaction Program
// Last month Joe purchased some stock in Acme Software, Inc. Here are the details of
// the purchase:
// � The number of shares that Joe purchased was 1,000.
// � When Joe purchased the stock, he paid $32.87 per share.
// � Joe paid his stock broker a commission that amounted to 2% of the amount he
// paid for the stock.
// Two weeks later Joe sold the stock. Here are the details of the sale:
// � The number of shares that Joe sold was 1,000.
// � He sold the stock for $33.92 per share.
// � He paid his stock broker another commission that amounted to 2% of the
// amount he received for the stock.
// Write a program that displays the following information:
// � The amount of money Joe paid for the stock.
// � The amount of commission Joe paid his broker when he bought the stock.
// � The amount that Joe sold the stock for.
// � The amount of commission Joe paid his broker when he sold the stock.
// � Display the amount of profit that Joe made after selling his stock and paying the
// two commissions to his broker. (If the amount of profit that your program displays
// is a negative number, then Joe lost money on the transaction.)


#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	const int share = 1000;
	const double agentCOMM = 0.02,
		purchasePrice = 32.87,
		soldPrice = 33.92;

	double amountReceived, amountPaid, agentComm, shareAmount;

	shareAmount = share * purchasePrice;
	agentComm = shareAmount * agentCOMM;
	amountPaid = shareAmount + agentComm;

	cout<<"\tStock Transaction Program";
	cout<<"\n\t-------------------------";
	cout<<"\n\n\tTotal Share: "<<share;
	cout<<"\n\tPer Share Purchase Price: \$"<<purchasePrice;
	cout<<"\n\tAmount Paid For Share: $"<<shareAmount;
	cout<<"\n\tAmount Paid To Agent: $"<<agentComm;
	cout<<"\n\tTotal Amount Paid: $"<<amountPaid;
	
	
	shareAmount = share * soldPrice;
	agentComm = shareAmount * agentCOMM;
	amountReceived = shareAmount - agentComm;

	cout<<"\n\n\tTotal Share: "<<share;
	cout<<"\n\tPer Share Sale Price: $"<<soldPrice;
	cout<<"\n\tAmount Received By Selling Share: $"<<shareAmount;
	cout<<"\n\tAmount Paid To Agent: $"<<agentComm;
	cout<<"\n\tNet Amount Received: $"<<amountReceived;

	cout<<"\n\n\tNet Profit / Loss: $"<<amountReceived - amountPaid;
	cout<<"\n\n\n";

	return 0;
}
