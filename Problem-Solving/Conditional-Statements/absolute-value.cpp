/*
Write a C++ program that takes an integer input from the user and prints its absolute value. 
Do not use the built-in 'abs()' function; instead, implement the absolute value calculation manually.

Example Input/Output:

Enter a number: -15
Absolute value: 15

Enter a number: 7
Absolute value: 7
  
Hints:
- If the number is negative, multiply it by '-1' to make it positive.
- If the number is already positive or zero, print it as is.
*/
#include <iostream>
using namespace std;

int main() {
    int num,absoluteValue;

    cout << "Enter an integer: ";
    cin>>num;
   
    if (num >= 0)
        absoluteValue = num;

    else
        absoluteValue = -num;


    cout << "The absolute value of " << num << " is: " << absoluteValue << endl;

    return 0;
}