// Task: 02-03
// Design an algorithm which asks the user to enter a positive integer value, and calculates and
// displays the number of digits present in it. For example, if the user enters 728 it should display 3, 
// if the user enters 5 it should display 1, etc.

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

    int count = 0; // to store the no. of digits
    int num2 = num; // assign the input value so that this variable may use in the loop
    while (num2 > 0) {
        num2 = num2 / 10; // divide with 10 and store the result in the same variable
        count++; // increment the variable
    }
    cout << "\nThis Programme will tell the Number of digits in " << num << ".\n";
    cout << "\nAnd the Number of Digits in " << num << " is: " << count << endl;
    return 0;
}
