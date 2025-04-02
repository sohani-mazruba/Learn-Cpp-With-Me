/*
  Write a C++ program to determine the largest among a series of numbers entered by the user, utilizing if-else statements.
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    double num;
    double largest = 0;
    cout << "Enter number of elements: ";
    cin >> n;

    for (int i=1; i<=n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;

        if (num>largest) {
            largest = num;
        }
    }
    cout << "The largest number is: " << largest << endl;

    return 0;
}