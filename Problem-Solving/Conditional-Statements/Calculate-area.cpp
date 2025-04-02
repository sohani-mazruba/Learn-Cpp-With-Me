/*
   Write a C++ program that prompts the user to select a geometric shape 
  (circle, rectangle, triangle) and then calculates its area using a switch-case statement for shape selection.
*/

#include <iostream>
using namespace std;

int main () {
    int choice;
    const float PI = 3.1416;
    double radius, length, width, base, height, area;
    cout << "Select Geometric Shape: " << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "Enter Choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        area = PI*(radius*radius);
        cout << "Area of the circle is: " << area << endl;
        break;
    case 2:
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;
        area = length * width;
        cout << "Area of the rectangle is: " << area << endl;
        break;
    case 3:
        cout << "Enter the base of the rectangle: ";
        cin >> base;
        cout << "Enter the height of the rectangle: ";
        cin >> height;
        area = 0.5*(base * height);
        cout << "Area of the triangle is: " << area << endl;
        break;
    default:
        cout << "Invalid Input" << endl;
    }

    return 0;
}
