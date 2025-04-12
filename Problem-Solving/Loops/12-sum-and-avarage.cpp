/*
  Create a C++ program that prompts the user to enter a series of numbers. 
  Calculate and display the sum and average of the numbers entered using a do-while loop. 
*/
#include <iostream>
using namespace std;

int main () {
    int num;
    double n, sum, avg;

    cout << "Enter the number of elements: " << endl;
    cin >> n;
    int i = 1;
    do {
        cout << "Enter number " << i << ": ";
        cin >> num;

        sum += num;
        i++;
    } 
    while (i<=n);
    avg = sum/n;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg << endl;

    return 0;
}
