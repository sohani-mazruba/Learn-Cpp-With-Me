/*
  Write a C++ program that finds the smallest number among three integers.
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

   else if (num3 < smallest)
        {
        smallest = num3;
        }

    cout << "The smallest number is: " << smallest << endl;

    return 0;

}
