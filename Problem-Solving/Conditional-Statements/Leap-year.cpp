/*
Write a C++ program to check whether a given year is a leap year or not. 

The program should prompt the user to enter a year and display whether it is a leap year or not.

Example Input and Output:

Input:
Enter a year: 2024

Output:
2024 is a leap year.

Input:  
Enter a year: 1900

Output: 
1900 is not a leap year.


Hints:
A year is a leap year if it satisfies the following conditions:

1. If the year is divisible by 400, then it is a leap year.
2. If the year is divisible by 4 but not divisible by 100, then it is a leap year.
3. Otherwise, it is not a leap year.
*/
#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter a year: ";

    if (!(cin >> year))

        cout << "This is not a year." << endl;


    else if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))

        cout << year << " is a leap year." << endl;

    else

        cout << year << " is not a leap year." << endl;


    return 0;
}

