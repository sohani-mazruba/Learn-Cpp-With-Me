/*
   Write a C++ program that simulates a simple vending machine. 
   The program should prompt the user to select an item (e.g., Coke, Pepsi, Snickers) and display the price using a switch-case statement.
*/

#include <iostream>
using namespace std;

int main () {
    int choice;

    cout << "Select an item:" << endl;
    cout << "1. Coke" << endl;
    cout << "2. Pepsi" << endl;
    cout << "3. Snickers" << endl;
    cout << "Enter your choice (1, 2, 3): ";
    cin >> choice;

    switch(choice) {
    case 1:
        cout << "Price of Coke: 20 TAKA" << endl;
        break;
    case 2:
        cout << "Price of Pepsi: 25 TAKA" << endl;
        break;
    case 3:
        cout << "Price of Snickers: 80 TAKA" << endl;
        break;
    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
