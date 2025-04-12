/*
Write a C++ program that finds the sum and average of the first 20 natural numbers using 
a for loop.
*/

#include <iostream>
using namespace std;

int main() {
    int n = 20;
    double sum = 0;

    for (int i = 1; i <= 20; i++) {
        sum += i;
    }

    double avg = sum / ( double)n;

    cout << "Sum of first 20 natural numbers: " << sum << endl;
    cout << "Average of first 20 natural numbers: " << avg << endl;

    return 0;
}
