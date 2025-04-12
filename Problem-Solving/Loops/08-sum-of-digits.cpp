/*
   Create a C++ program that calculates the sum of digits of a given integer provided by the user using a while loop.
*/

#include <iostream>
using namespace std;

int main () {
    int N;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> N;

    int i=1;
    while (i<=N) {
        sum += i;
        i++;
    }
    cout << "Sum of all integer numbers: " << sum << endl;

    return 0;
}
