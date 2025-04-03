/*
   Write a C++ program that implements a simple calculator capable of performing 
   addition, subtraction, multiplication, and division operations using if-else condition.
*/

#include <iostream>

using namespace std;

int main() 
{
    double num1, num2, result;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    
  
    if (op == '+') 
    {
        result = num1 + num2;
        cout << "Result: " << result << endl;
    } 

    else if (op == '-') 
    {
        result = num1 - num2;
        cout << "Result: " << result << endl;
    } 

    else if (op == '*') 
    {
        result = num1 * num2;
        cout << "Result: " << result << endl;
    } 

    else if (op == '/') 
    {
        if (num2 != 0) {
            result = num1 / num2;
            cout << "Result: " << result << endl;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    } 
    
    else 
    {
        cout << "Error: Invalid operator." << endl;
    }
    
    return 0;
}
