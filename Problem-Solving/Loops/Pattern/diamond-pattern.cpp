/*
   Write a C++ program to display a diamond pattern of asterisks (*) 
   where the number of rows in the diamond is specified by the user, utilizing nested for loops.
*/

#include <iostream>
using namespace std;

int main () {
    int height, width;
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
    for (int i = height-1; i>=0; i--) {
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
