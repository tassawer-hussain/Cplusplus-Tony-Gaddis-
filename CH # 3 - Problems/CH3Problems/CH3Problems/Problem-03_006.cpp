// Problem 06: How Many Widgets?
// The Yukon Widget Company manufactures widgets that weigh 9.2 pounds each.
// Write a program that calculates how many widgets are stacked on a pallet, based on
// the total weight of the pallet. The program should ask the user how much the pallet
// weighs by itself and with the widgets stacked on it. It should then calculate and display
// the number of widgets stacked on the pallet.


#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	const double widgetWeigh = 9.2;

	double palletWeigh, weighWithWidgets, widgetWeighTotal;

	cout << " Pallet Weighs by Itself: ";
	cin >> palletWeigh ;

	cout << "Pallet Weighs with the Widgets Stacked on it: ";
	cin >> weighWithWidgets;

	widgetWeighTotal = weighWithWidgets - palletWeigh ;

	cout<<setprecision(0) << fixed;
	cout<<"Number of Widgets Stack On A pallet are "<< widgetWeighTotal / widgetWeigh;
	
	cout<<"\n\n\n";
	return 0;
}
