/*
Write a C++ program that takes three integers as input and determines which is the largest even number or the largest odd number. 
*/
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    int largest = num1;

    if (num2 > largest)
        {
        largest = num2;
        }

   if (num3 > largest)
        {
        largest = num3;
        }

    cout << "The largest number is: " << largest << endl;

    if (largest % 2 == 0)
        {
        cout << "The largest number is even." << endl;
        }
    else
        {
        cout << "The largest number is odd." << endl;
        }

    return 0;
}



