/*
   Develop a C++ program that prints a pyramid pattern of numbers with a user-specified height using nested for loops.
*/

#include <iostream>
using namespace std;

int main () {
    int height;
    cout << "Enter height: ";
    cin >> height;

    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= height - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
