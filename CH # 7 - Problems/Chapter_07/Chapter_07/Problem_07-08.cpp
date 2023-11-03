//	8. Proper Words

/*	Write a function that uses an array parameter to accept a string as its argument. It
	should convert the ﬁrst letter of each word in the string to uppercase. If any of the letters
	are already uppercase, they should be left alone. (See the hint in Problem 7 for help
	on converting lowercase characters to uppercase.) Demonstrate the function in a simple
	program that asks the user to input a string, passes it to the function, and then
	displays the string after it has been modiﬁed.
*/


#include <iostream>
using namespace std;

// Function Prototype
void wordConvert(char [], int);

int main() {
	char input[250];
	cout<<"Enter a string :";
	cin.getline(input,250);
	
	cout<<"Original String: "<<input;
	wordConvert(input, 250);
	cout<<"\nUpdated String: "<<input;
	cout<<"\n\n";

	return 0;
}

void wordConvert(char arr[], int size) {
	// 65 to 90 Capital Letter
	// 97 to 122 Lower Letter
	
	for(int i=0; i<size; i++) {
		if(arr[i]==32) {
			if(arr[i+1]>=97 && arr[i+1]<=122)
				arr[i+1] = char(int(arr[i+1])-32);
		}
	}
}
