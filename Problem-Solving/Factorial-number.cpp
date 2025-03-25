/*
  Create a C++ program that calculates the factorial of a given number using a for loop.
*/

#include <iostream>
using namespace std;

int main () {
    int number;
    int factorial = 1;
    cout << "Enter a number: ";
    cin >> number;

    for (int i=number; i>0; i--) {
        factorial *= i;
    }
    cout << "Factorial of " << number << " is: " << factorial << endl;

    return 0;
}
