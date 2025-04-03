/*
   Write a C++ program that prompts the user to select a geometric shape 
  (circle, rectangle, triangle) and then calculates its area using a switch-case statement for shape selection.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main () 
{
    int choice;
    const float PI = 3.1416;
    double r, l, w, b, h, area;
    cout << "Select Geometric Shape: " << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "Enter Choice: ";
    cin >> choice;

    switch (choice) 
    {
    case 1:
        cout << "Enter the radius of the circle: ";
        cin >> r;

    if(r<0)
    {
        cout << "Radius can't be negative." <<endl;
    }
    else
    {   
        area = PI*pow(r,2);
        cout << "Area of the circle is: " << area << endl;
    }  
        break;

    case 2:
        cout << "Enter the length of the rectangle: ";
        cin >> l;
        cout << "Enter the width of the rectangle: ";
        cin >> w;

    if(l&&w<0)
    {
        cout << "Invalid! Neither lenght nor weight can be negative." <<endl;
    }
   else  
    {
        area = l*w;
        cout << "Area of the rectangle is: " << area << endl;
    }     
        break;

    case 3:
        cout << "Enter the base of the rectangle: ";
        cin >> b;
        cout << "Enter the height of the rectangle: ";
        cin >> h;

    if(b&&h<0)
    {
        cout << "Invalid! Neither base nor height can be negative." <<endl;
    }
    else
    {   
        area = 0.5*(b*h);
        cout << "Area of the triangle is: " << area << endl;
    }    
        break;

    default:
        cout << "Invalid Input" << endl;
    }

    return 0;
}
