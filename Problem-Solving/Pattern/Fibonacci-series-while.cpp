/*
   Develop a C++ program that generates Fibonacci series up to a specified limit using a while loop.
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

    int i = 1;
    while (i<=(n-2)) {
        next = n1 + n2;
        cout << next << " ";
        n1 = n2;
        n2 = next;
        i++;
    }

    return 0;
}