/*
Write a C++ program that finds the sum and average of the first 20 natural numbers using 
a for loop.
*/

#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int count = 20;

    for (int i = 1; i <= 20; i++) {
        sum = sum + i;
    }

    float average = sum / (float)count;

    cout << "Sum of first 20 natural numbers: " << sum << endl;
    cout << "Average of first 20 natural numbers: " << average << endl;

    return 0;
}
