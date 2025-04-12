/*
  Create a C++ program that calculates the factorial of a given number using a for loop.
*/

#include <iostream>
using namespace std;

int main () {
    int num;
    int f = 1;
    cout << "Enter a number: ";
    cin >> num;

    for (int i=num; i>0; i--) {
        f *= i;
    }
    cout << "Factorial of " << num << " is: " << f << endl;

    return 0;
}
