/*
Write a C++ program to find the sum of all elements in a one-dimensional array of integers.
*/

#include <iostream>
using namespace std;

int main () {
    int arr[5], sum=0;

    for (int i=0; i<5; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum of all element is: " << sum << endl;

    return 0;
}