/*
Write a C++ program that determines whether a person is eligible to vote based on their age.

The program should:
- Ask the user to enter their age.
- If the age is 18 or above, print: "You are eligible to vote."
- If the age is below 18, print: "You are not eligible to vote."
- If the user enters a negative age or a non-numeric input, display an appropriate error message.
*/

#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age: ";

    if (!(cin >> age)) {
        cout << "Invalid input! Please enter a numeric value." << endl;
    }
    else if (age < 0) {
        cout << "Invalid input! Age cannot be negative." << endl;
    }
    else if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    }
    else {
        cout << "You are not eligible to vote." << endl;
    }

    return 0;
}
