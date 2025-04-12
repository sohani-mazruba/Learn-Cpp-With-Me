/*
 How can you implement a C++ program to calculate the volume of a circle using the radius provided by the user, 
 utilizing data types and mathematical expressions?
*/

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    float v,r;
    const float pi = 3.1416;
    cout << " Enter the value of radius : " ;
    cin >> r;

    if(r<0)
    {
        cout << "Radius can't be negative." <<endl;
    }
    else
    {
        v = (4*pi*pow(r,3))/3 ;
        cout << "The volume of the circle is : " << v << endl;
    }
    return 0;
}

/*
or,

#include <iostream>
#include <math.h>
using namespace std;

int main () {
    const float PI = 3.1416;
    float radius, volume;
    cout << "Enter the radius of a circle: ";
    cin >> radius;

    if (radius < 0) {
        cout << "Radius cannot be Negative" << endl;
    } else {
        volume = (4.0/3.0)*PI*(pow(radius,3));
        cout << "Volume of the circle is: " << volume << endl;
    }

    return 0;
}
*/