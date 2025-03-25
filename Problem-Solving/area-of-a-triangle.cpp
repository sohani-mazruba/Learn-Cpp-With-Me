/*
 Write a C++ program to compute the area of a triangle using the length of its three sides, 
 employing suitable data types and arithmetic operations.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main () {
    double s1, s2, s3, s, area;
    cout << "Enter the length of triangle(Side 1): ";
    cin >> s1;
    cout << "Enter the length of triangle(Side 2): ";
    cin >> s2;
    cout << "Enter the length of triangle(Side 3): ";
    cin >> s3;

    if (s1+s2>s3 && s1+s3>s2 && s2+s3>s1) 
    {
        s = (s1+s2+s3)/2;
        area = sqrt(s*(s-s1)*(s-s2)*(s-s3));
        cout << "Area of the Triangle is " << area << endl;
    } 

    else 
    {
        cout << "Invalid Triangle. The sum of the lengths of any two sides must be greater than the length of the third side" << endl;
    }

    return 0;
}