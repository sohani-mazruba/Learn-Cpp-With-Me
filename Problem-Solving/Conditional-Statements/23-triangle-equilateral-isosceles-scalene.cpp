/*
   Write a C++ program that checks if a triangle with given side lengths is equilateral, isosceles, or scalene using if-else statements.
*/

#include <iostream>
using namespace std;

int main () {
    int side1, side2, side3;
    cout << "Enter sides of a Triangle(1-3):" << endl;
    cout << "Side 1: ";
    cin >> side1;
    cout << "Side 2: ";
    cin >> side2;
    cout << "Side 3: ";
    cin >> side3;

    if (side1==side2 && side2==side3) {
        cout << "The triangle is Equilateral." << endl;
    } else if (side1==side2 || side2==side3 || side3==side1) {
        cout << "The triangle is Isosceles." << endl;
    } else {
        cout << "The triangle is Scalene." << endl;
    }

    return 0;
}
