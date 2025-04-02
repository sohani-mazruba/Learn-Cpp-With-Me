/*
   Write a C++ program that takes an integer input from the user and prints its absolute value. 
   Do not use the built-in 'abs()' function; instead, implement the absolute value calculation manually.

   Example Input/Output:

   Enter an integer: -15
   Absolute value: 15

   Enter an integer: 7
   Absolute value: 7

   Enter an integer: jfagfiua
   This is not a number.
  
Hints:
- If the number is negative, multiply it by '-1' to make it positive.
- If the number is already positive or zero, print it as is.
*/

#include <iostream>
using namespace std;

int main() {
    int num, abs_Value;

    cout << "Enter an integer: ";

    if (!(cin >> num)) 
        cout << "This is not a number." << endl;
        return 1; // Exit program if input is invalid

    if (num >= 0)
        abs_Value = num;
    else
        abs_Value = -num;

    cout << "The absolute value of " << num << " is: " << abs_Value << endl;

    return 0;
}
