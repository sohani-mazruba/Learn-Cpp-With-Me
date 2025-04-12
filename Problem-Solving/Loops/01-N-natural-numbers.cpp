/*
   Write a C++ program that prints the first N natural numbers (where N is provided by the user) using a for loop.
*/

#include <iostream>
using namespace std;

int main () {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    for (int i=1; i<=N; i++) {
        cout << i << " ";
    }

    return 0;
}

