//	7. Lowercase to Uppercase Converter

/*	Write a program that lets the user enter a string into a character array. The program
	should then convert all the lowercase letters to uppercase. (If a character is already
	uppercase, or is not a letter, it should be left alone.) Hint: Consult the ASCII chart in
	Appendix A. Notice that the lowercase letters are represented by the ASCII codes 97
	through 122. If you subtract 32 from any lowercase character�s ASCII code, it will
	yield the ASCII code of the uppercase equivalent.
*/


#include <iostream>
using namespace std;

int main() {
	char input[250];
	cout<<"Enter a string :";
	cin.getline(input,250);
	
	cout<<"Original String: "<<input;
	
	// 65 to 90 Capital Letter
	// 97 to 122 Lower Letter
	for(int i=0; i<250; i++) {
		if(input[i]>=97 && input[i]<=122)
			input[i] = char(int(input[i])-32);
	}

	cout<<"\nUpdated String: "<<input;
	cout<<"\n\n";

	return 0;
}
