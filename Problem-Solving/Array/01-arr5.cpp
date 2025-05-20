/*
 Create a C++ program that takes input from the user to store 5 integers in a one-dimensional
 array and then displays the elements of the array.
*/

#include <iostream>
using namespace std;

int main () {
    int arr[5];

    cout << "Enter 5 integers: ";
    for (int i=0; i<5; i++)
    {
        cin >> arr[i];
    }

    cout << "The elements in the array are:" << " " ;
    for (int i=0; i<5; i++) {
        cout << arr[i]<<" ";
    }

    return 0;
}