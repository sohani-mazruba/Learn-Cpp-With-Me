/*
 Develop a C++ program that finds the largest element in an array of integers. 
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    int largest = 0;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    for (int i=0; i<n; i++) {
        cout << "Enter element" << i+1 << ": ";
        cin >> arr[i];

        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    cout << "Largest of all element is: " << largest << endl;

    return 0;
}