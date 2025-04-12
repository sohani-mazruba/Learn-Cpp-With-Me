/*
  Develop a C++ program that generates the Fibonacci series up to a specified limit using a for loop.
*/

#include <iostream>
using namespace std;

int main () {
    int n, next;
    int n1 = 0;
    int n2 = 1;
    cout << "Enter a number: ";
    cin >> n;

    cout << "The Fibonacci Series is: ";
    cout << n1 << " " << n2 << " ";

    for (int i = 1; i<=(n-2); i++) {
        next = n1 + n2;
        cout << next << " ";
        n1 = n2;
        n2 = next;
    }

    return 0;
}
