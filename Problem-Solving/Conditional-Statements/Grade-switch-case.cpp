/*
   Write a C++ program that converts a numeric grade into a letter grade (A, B, C, D, or F) 
   using a switch-case statement to handle different grade ranges.
*/

#include <iostream>
using namespace std;

int main () {
    int NumGrade;
    cout << "Enter Numeric Grade: ";
    cin >> NumGrade;

    switch (NumGrade/10) 
    {
    case 10:
        cout << "Your grade is: A+." << endl;
        break;
    case 9:
        cout << "Your grade is: A." << endl;
        break;
    case 8:
        cout << "Your grade is: B." << endl;
        break;
    case 7:
        cout << "Your grade is: C." << endl;
        break;
    case 6:
        cout << "Your grade is: D." << endl;
        break;
    default:
        cout << "Your grade is: F." << endl;
    }

    return 0;
}
