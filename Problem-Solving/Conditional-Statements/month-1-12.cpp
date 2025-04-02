/*
   Write a C++ program that prompts the user for a month number (1 to 12) and 
   then displays the corresponding name of the month using a switch-case statement.
*/

#include <iostream>
using namespace std;

int main () {
    int choice;
    cout << "Enter the number of month(1-12): ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "January" <<endl;
        break;
    case 2:
        cout << "February" <<endl;
        break;
    case 3:
        cout << "March" <<endl;
        break;
    case 4:
        cout << "April" <<endl;
        break;
    case 5:
        cout << "May" <<endl;
        break;
    case 6:
        cout << "June" <<endl;
        break;
    case 7:
        cout << "July" <<endl;
        break;
    case 8:
        cout << "August" <<endl;
        break;
    case 9:
        cout << "September" <<endl;
        break;
    case 10:
        cout << "October" <<endl;
        break;
    case 11:
        cout << "November" <<endl;
        break;
    case 12:
        cout << "Decemeber" <<endl;
        break;
    default:
        cout << "Invalid Input" <<endl;
        break;
    }

    return 0;
}