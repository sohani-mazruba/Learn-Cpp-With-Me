/*
  Design a C++ program that prints the multiplication table of a given number (up to a specified range) using a for loop.
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i=1; i<=10; i++) {
        cout << n << "*" << i << "= " << n*i << endl;
    }

    return 0;
}
