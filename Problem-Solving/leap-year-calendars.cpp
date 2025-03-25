/*
  Write a C++ program that determines whether a given year is a leap year or not, 
  considering both the Gregorian and Julian calendars, using if-else statements.
*/

#include <iostream>
using namespace std;

int main () {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if ((year%4==0 && year%100!=0) || (year%400==0)) {
        cout << year << " is a Leap Year in the Gregorian Calendar." << endl;
    } else {
        cout << year << " is not a Leap Year in the Gregorian Calendar." << endl;
    }

    if (year%4==0) {
        cout << year << " is a Leap Year in the Julian Calendar." << endl;
    } else {
        cout << year << " is not a Leap Year in the Julian Calendar." << endl;
    }

    return 0;
}