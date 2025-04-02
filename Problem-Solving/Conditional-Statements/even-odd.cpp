/*
  Write a C++ program to check if a given number is even or odd using if-else statements. ( Number must be positive.)
*/

#include <iostream>
using namespace std;

int main () {
    int number;
    cout << "Enter a number: ";

    if (!(cin >> number))
    {
        cout << "Invalid Input" << endl;
    }

    else if (number < 0)
    {
        cout << "Number must be positive." << endl;
    }

    else if (number % 2 == 0)
    {
        cout << number << " is an Even Number" << endl;
    }
    else
    {
        cout << number << " is an Odd Number" << endl;
    }

    return 0;
}

