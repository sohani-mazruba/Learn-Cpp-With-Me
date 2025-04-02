/*
  Create a C++ program that prompts the user to enter a series of numbers. 
  Calculate and display the sum and average of the numbers entered using a do-while loop. 
*/
#include <iostream>
using namespace std;

int main () {
    int number;
    double count, sum, avg;

    cout << "Enter the number of elements: " << endl;
    cin >> count;
    int i = 1;
    do {
        cout << "Enter number " << i << ": ";
        cin >> number;

        sum += number;
        i++;
    } while (i<=count);
    avg = sum/count;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg << endl;

    return 0;
}
