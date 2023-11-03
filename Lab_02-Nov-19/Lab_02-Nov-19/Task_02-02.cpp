// Task: 02-02  
// Design an algorithm which asks the user to enter a positive integer value (lets say n) and
// calculate and display the factorial of n. 


#include<iostream>

using namespace std;

int main() {
    int num; // varisble for store the input
    cout << "Enter A Number (Positive Integer): ";
    cin >> num;
    while (num < 0) // loop to confirm that the input Number is A positive integer
    {
        cout << "The Number you enter is not a Positive number.\n";
        cout << "Please enter again a Positive Number: ";
        cin >> num;
        cout << endl;
    }
    /*int fact = num;
    while(num>0)
    {
    	num--;
    	fact = fact * num;
    }*/

    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact = fact * i;
    }

    cout << "\nThis Programme will tell the Factorial of the " << num << " .\n";
    cout << "\nAnd the Factorial of the " << num << " is: " << fact << endl;
    return 0;
}
