/*
 Write a C++ program that converts temperature from Celsius to Fahrenheit and vice versa using proper data types and arithmetic operations.
*/

#include <iostream>
using namespace std;

int main () {
    int choice;
    float temp, conv;

    cout << "Enter Temperature: ";
    cin >> temp;
    cout << "Enter '1' for Celsius to Fahrenheit Conversion" << endl;
    cout << "Enter '2' for Fahrenheit to Celsius Conversion" << endl;
    cout << "Enter Choice(1 or 2): ";
    cin >> choice;

    switch (choice) {
    case 1:
        conv = ((temp*9.0)/5.0) + 32;
        cout << temp << " Degree Celsius is Equivalent to " << conv << " Degree Fahrenheit." << endl;
        break;
    case 2:
        conv = ((temp-32)*5.0)/9.0;
        cout << temp << " Degree Fahrenheit is Equivalent to " << conv << " Degree Celsius." << endl;
        break;
    default:
        cout << "Invalid Input" << endl;
    }

    return 0;
} 