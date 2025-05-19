/*
Design a C++ program that counts the number of even and odd elements in a one
dimensional array.
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    int odd = 0, even = 0;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    for (int i=0; i<n; i++) {
        cout << "Enter element" << i+1 << ": ";
        cin >> arr[i];

        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    cout << "Even numbers: " <<even << endl;
    cout << "Odd numbers: " <<odd << endl;

    return 0;
}
