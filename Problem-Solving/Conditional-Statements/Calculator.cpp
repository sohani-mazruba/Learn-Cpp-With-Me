/*
  Write a C++ program that implements a simple calculator capable of performing 
  addition, subtraction, multiplication, and division operations using a switch-case statement for operation selection.
*/

#include <iostream>
using namespace std;

int main () {
    char choice;
    double num1, num2, result;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter operator(+,-,*,/): ";
    cin >> choice;

    switch (choice) {
    case '+':
        result = num1 + num2;
        cout << num1 << "+" << num2 << "= " << result << endl;
        break;
    case '-':
        result = num1 - num2;
        cout << num1 << "-" << num2 << "= " << result << endl;
        break;
    case '*':
        result = num1 * num2;
        cout << num1 << "*" << num2 << "= " << result << endl;
        break;
    case '/':
        if (num2!=0) {
            result = num1 / num2;
            cout << num1 << "/" << num2 << "= " << result << endl;
        } else {
            cout << "Cannot divide by 0(Zero)" << endl;
        }
        break;
    default:
        cout << "Invalid Operator." << endl;
        break;
    }

    return 0;
}
