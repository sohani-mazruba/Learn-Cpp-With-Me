/*
  Write a C++ program that calculates the area of a circle given its radius using appropriate data types and mathematical operations.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main () {
    const float PI = 3.1416;
    float r, area;
    cout << "Enter Radius: ";
    cin >> r;

    if(r<0)
    {
        cout << "Radius can't be negative." <<endl;
    }
    else
    {
        area = PI*pow(r,2);
        cout << "The area of the Circle is: " << area << endl;
    }  
    

    return 0;
}
 /*
 or,
 
#include <iostream>
using namespace std;

int main () {
    const float PI = 3.1416;
    float radius, area;
    cout << "Enter Radius: ";
    cin >> radius;

    if(r<0)
    {
        cout << "Radius can't be negative." <<endl;
    }
    else
    {
        area = PI*(radius*radius);
        cout << "The area of the Circle is: " << area << endl;

    }  
    return 0;
}
 */