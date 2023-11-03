// Task: 02-04
// Design an algorithm which asks the user to input three positive integers, and computes and 
// displays the average of the two highest numbers.

#include<iostream>

using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Enter Three Number: \n";
    cin >> num1 >> num2 >> num3;
    while (num1 < 0 || num2 < 0 || num3 < 0) {
        cout << "On or more of the Input Number Are Non-Positive Integer.\n";
        cout << "Please Enter The Number Again. :";
        cin >> num1 >> num2 >> num3;
    }

    if (num1 == num2 && num2 == num3)
        cout << "All the Number Are equal to Each Other. \n";
    else {
        cout << "This programme will  calculate the average of the two highest number. \n";
        if (num1 > num2 && num2 > num3) {
            cout << "The two Highest Number Are " << num1 << " And " << num2 << endl;
            cout << "And their Average is " << (num1 + num2) / 2;
            cout << endl;
        } else if (num2 > num3 && num3 > num1) {
            cout << "The two Highest Number Are " << num2 << " And " << num3 << endl;
            cout << "And their Average is " << (num2 + num3) / 2;
            cout << endl;
        } else {
            cout << "The two Highest Number Are " << num3 << " And " << num1 << endl;
            cout << "And their Average is " << (num3 + num1) / 2;
            cout << endl;
        }
    }
    return 0;
}