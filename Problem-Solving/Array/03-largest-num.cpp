/*
 Develop a C++ program that finds the largest element in an array of integers. 
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of elements." << endl;
        return 1;
    }

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "Largest of all elements is: " << largest << endl;

    return 0;
}
