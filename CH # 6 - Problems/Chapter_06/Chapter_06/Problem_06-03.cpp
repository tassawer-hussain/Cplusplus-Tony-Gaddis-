//	3. Winning Division

/*	Write a program that determines which of a company�s four divisions (Northeast,
	Southeast, Northwest, and Southwest) had the greatest sales for a quarter. It should
	include the following two functions, which are called by main.

	� double getSales() is passed the name of a division. It asks the user for a division�s
	quarterly sales figure, validates the input, then returns it. It should be called once for each division.
	
	� void findHighest() is passed the four sales totals. It determines which is the
	largest and prints the name of the high grossing division, along with its sales figure.

	Input Validation: Do not accept dollar amounts less than $0.00.
*/


#include <iostream>
using namespace std;

//Function Protype
double getSale(const char *);
void findHighest(const double&, const double&, const double&, const double&);

int main() {

	double sale1, sale2, sale3, sale4;
	char div1[] = "Northeast",
		div2[] = "Southeast",
		div3[] = "Northwest",
		div4[] = "Southwest";

	sale1 = getSale(div1);
	sale2 = getSale(div2);
	sale3 = getSale(div3);
	sale4 = getSale(div4);
	findHighest(sale1, sale2, sale3, sale4);

	return 0;
}

double getSale(const char *arr) {
	double sale;
	cout<<"Enter the Quarterly Sales Figure of "<<arr<<" :";
	cin>>sale;

	while(sale<0.00) {
		cout<<"ERROR: Sale must not be less than 0.00. Enter Again: ";
		cin>>sale;
	}
	return sale;
}

void findHighest(const double& a, const double& b, const double& c, const double& d) {
	if (a>b && a>c && a>d)
		cout<<"\n\nNortheast has the highest sale with sale $ "<<a<<"\n\n";
	else if (b>a && b>c && b>d)
		cout<<"\n\nSoutheast has the highest sale with sale $ "<<b<<"\n\n";
	else if (c>b && c>a && c>d)
		cout<<"\n\nNorthwestt has the highest sale with sale $ "<<c<<"\n\n";
	else
		cout<<"\n\nSouthwest has the highest sale with sale $ "<<d<<"\n\n";
}
