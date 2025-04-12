/*
   Design a C++ program that prompts the user to enter numbers continuously until a negative number is encountered, 
   then calculates the sum of all the positive numbers using a while loop.
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    int sum = 0;

    while (true) {
       cout << "Enter a number: ";
       cin >> n;

       if (n<0) {
        break;
       }
       sum += n;
    }
    cout << "The sum of all Positive number is: " << sum << endl;

    return 0;
}
