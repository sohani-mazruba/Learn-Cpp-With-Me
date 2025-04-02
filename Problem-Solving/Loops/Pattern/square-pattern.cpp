/*
   Design a C++ program that prints a hollow square pattern of asterisks (*) with user-defined dimensions using nested for loops.
*/

#include <iostream>
using namespace std;

int main () {
    int height, width;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter width: ";
    cin >> width;

     for (int i = 1; i <= height; ++i) {
        for (int j = 1; j <= width; ++j) {
            if (i == 1 || i == height || j == 1 || j == width) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}