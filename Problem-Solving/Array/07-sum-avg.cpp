/*
Create a C++ program that calculates the average of all elements in a one-dimensional
array of floating-point numbers.
*/

#include <iostream>
using namespace std;

int main () {
    int n, count = 0;
    float sum=0, avg;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    for (int i=0; i<n; i++) {
        cout << "Enter element: " << i+1 << ": ";
        cin >> arr[i];

        count++;
        sum += arr[i];
    }
    avg = sum / count;
    cout << "Average: " << avg << endl;
    return 0;
}