/*
  Implement a C++ program to print a right-angled triangle pattern of asterisks (*) where the number of rows is 
  determined by the user input, using nested for loops.
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter the number of Row: ";
    cin >> n;

    for (int row=1; row<=n; row++) {
        for (int col=1; col<=row; col++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
