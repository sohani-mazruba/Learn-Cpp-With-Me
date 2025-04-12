/*
  Write a C++ program to determine the largest among a series of numbers entered by the user, utilizing if-else statements.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    if (n < 1) 
    {
        cout << "You must enter at least one number." << endl;
        return 1;
    }

    int num, largest;

    cout << "Enter number 1: ";
    cin >> num;
    largest = num;

    for (int i = 2; i <= n; i++) //Starts a loop from 2 to n (because the first number was already read before the loop).
    {
        cout << "Enter number " << i << ": ";
        cin >> num;

        if (num > largest) {
            largest = num;
        }
    }

    cout << "The largest number is: " << largest << endl;

    return 0;
}