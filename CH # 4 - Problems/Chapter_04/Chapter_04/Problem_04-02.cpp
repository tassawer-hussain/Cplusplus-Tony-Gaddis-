/*
	2. Roman Numeral Converter
	Write a program that asks the user to enter a number within the range of 1 through
	10. Use a switch statement to display the Roman numeral version of that number.
	Input Validation: Do not accept a number less than 1 or greater than 10.
*/



#include <iostream>
using namespace std;

int main()
{
	int input;
	cout<<"Enter a number.";
	cin>>input;

	while(input<1 || input>10)
	{
		cout<<"Error Msg: \nPlease enter a number in range of 1 to 10.\n\n";
		cin>>input;
	}

	switch(input)
	{
		case 1:
		cout<<"\nRoman Numeral version Of " << input <<" is i\n\n";
		break;

		case 2:
		cout<<"\nRoman Numeral version Of " << input <<" is ii\n\n";
		break;

		case 3:
		cout<<"\nRoman Numeral version Of " << input <<" is iii\n\n";
		break;

		case 4:
		cout<<"\nRoman Numeral version Of " << input <<" is iv\n\n";
		break;

		case 5:
		cout<<"\nRoman Numeral version Of " << input <<" is v\n\n";
		break;

		case 6:
		cout<<"\nRoman Numeral version Of " << input <<" is vi\n\n";
		break;

		case 7:
		cout<<"\nRoman Numeral version Of " << input <<" is vii\n\n";
		break;

		case 8:
		cout<<"\nRoman Numeral version Of " << input <<" is viii\n\n";
		break;

		case 9:
		cout<<"\nRoman Numeral version Of " << input <<" is ix\n\n";
		break;

		default:
		cout<<"\nRoman Numeral version Of " << input <<" is x\n\n";
		break;
	}

	return 0;
}

