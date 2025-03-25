/*
Write a C++ program that checks whether a given number is positive, negative, or zero.

The program should:
- Ask the user to enter a number.
- Check the value of the number and determine if it is:
- Positive (greater than 0)
- Negative (less than 0)
- Zero (equal to 0)
- Display an appropriate message based on the number.
- If the user enters a non-numeric input, display an error message.
*/

#include <iostream>
using namespace std;

int main() {
    double number;
    cout << "Enter a number: ";
    cin >> number;

   
    if (!cin) {
        cout << "Invalid input! Please enter a number." << endl;
    } 
    else if (number > 0) {
        cout << number << " is a positive number." << endl;
    } 
    else if (number < 0) {
        cout << number << " is a negative number." << endl;
    } 
    else {
        cout << "The number is zero." << endl;
    }

    return 0;
}
