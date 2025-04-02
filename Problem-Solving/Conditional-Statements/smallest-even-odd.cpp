/*
Write a C++ program to find the smallest even or odd number among three integers
*/

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    int smallest = num1;

    if (num2 < smallest)
        {
        smallest = num2;
        }

   if (num3 < smallest)
        {
        smallest = num3;
        }

    cout << "The smallest number is: " << smallest << endl;

    if (smallest % 2 == 0) {
        cout << "The smallest number is even." << endl;
    } else {
        cout << "The smallest number is odd." << endl;
    }

    return 0;
}