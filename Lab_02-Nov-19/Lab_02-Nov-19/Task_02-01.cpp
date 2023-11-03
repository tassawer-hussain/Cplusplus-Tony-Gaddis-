// Task: 02-01  
// Design an algorithm which asks the user to enter a positive integer value (lets say n) and displays 
// all divisors of n. 


#include<iostream>

using namespace std;

int main() {
    int num; // varisble for store the input
    cout << "Enter A Number (Positive Integer): \n";
    cin >> num;
    while (num < 0) // loop to confirm that the input Number is A positive integer
    {
        cout << "The Number you enter is not a Positive number.\n";
        cout << "Please enter again a Positive Number: ";
        cin >> num;
        cout << endl;
    }
    cout << "This Programme will tell the numbers that are divisors of the " << num << " .\n";
    cout << "And the Divisors of the " << num << " are: \n\n";
    for (int i = 1; i <= num; i++) // loop to find the divisors of the number.
    {
        if ((num % i) == 0) // % operator is use to find the remainder of division.
        {
            cout << i;
            cout << endl;
        }
    }
    return 0;
}