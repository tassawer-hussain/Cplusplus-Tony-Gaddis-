//	11. Pointer Rewrite

/*	The following function uses reference variables as parameters. Rewrite the function so
	it uses pointers instead of reference variables, and then demonstrate the function in a complete program.

	int doSomething(int &x, int &y)
{
   int temp = x;
   x = y * 10;
   y = temp * 10;
   return x + y;
}
*/

#include <iostream>

using namespace std;

// Function Prototype
int doSomething(int * , int * );

int main() {
    int num1, num2, * ptr1, * ptr2;

    cout << "Enter Num 1: ";
    cin >> num1;
    cout << "Enter Num 2: ";
    cin >> num2;

    ptr1 = & num1;
    ptr2 = & num2;

    cout << "\n\n\nNum 1: " << num1;
    cout << "\nNum 2: " << num2;
    cout << "\nDo Something: " << doSomething(ptr1, ptr2);
    cout << "\n\n";

    return 0;
}

int doSomething(int * x, int * y) {
    int temp = * x;
    * x = * y * 10;
    * y = temp * 10;
    return * x + * y;
}