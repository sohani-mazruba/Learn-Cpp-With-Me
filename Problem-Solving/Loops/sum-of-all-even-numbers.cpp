/*
   Write a C++ program that computes the sum of all even numbers from 1 to N (where N is provided by the user) using a for loop.
*/

#include <iostream>
using namespace std;

int main () {
    int N;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> N;

    for (int i=2; i<=N; i+=2) {
        sum += i;
    }
    cout << "Sum of all even numbers: " << sum << endl;

    return 0;
}
