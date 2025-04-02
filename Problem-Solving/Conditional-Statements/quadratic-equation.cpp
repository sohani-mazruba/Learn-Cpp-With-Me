/*
 Write a C++ program that calculates the roots of a quadratic equation ax^2+bx+c=0 
 using if-else statements to handle different cases (real roots, complex roots, equal roots).
*/

#include <iostream>
#include <math.h>
using namespace std;

int main () {
    double a, b, c, root1, root2, real, imaginary, discriminant;
    cout << "Enter the coefficients of the quadratic equation (ax^2 + bx + c = 0): " << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    discriminant = pow(b,2)-(4*a*c);
    root1 = (-b - sqrt(discriminant)) / (2 * a);
    root2 = (-b + sqrt(discriminant)) / (2 * a);
    real = -b / (2 * a);
    imaginary = sqrt(-discriminant) / (2 * a);

    if (a!=0) 
    {
        if (discriminant>0) 
        {
            cout << "Roots are Real & Distinct." << endl;
            cout << "Root 1 = " << root1 << endl;
            cout << "Root 2 = " << root2 << endl;
        } 

        else if (discriminant==0) 
        {
            cout << "Roots are Real & Equal." << endl;
            cout << "Root 1 = Root 2 = " << real << endl;
        } 
        
        else 
        {
            cout << "Roots are Complex & Conjugate." << endl;
            cout << "Root 1 = " << real << "+" << imaginary << "i" << endl;
            cout << "Root 2 = " << real << "-" << imaginary << "i" << endl;
        }
    } 
    
    else 
    {
        cout << "Not a quadratic equation (a cannot be zero)." << endl;
    }

    return 0; 
}
