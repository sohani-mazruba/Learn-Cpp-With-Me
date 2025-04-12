/*
   Write a C++ program that prints the first N natural numbers (where N is provided by the user) using a for loop.
*/

#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Enter a number: ";
    cin >> N;

    if (N < 1) {
        cout << "Please enter a positive integer greater than 0." << endl;
        return 1;
    }

    cout << "The first " << N << " natural numbers are: ";
    for (int i = 1; i <= N; i++) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}


