/*
 Develop a C++ program that prompts the user to enter integers until they enter a negative number. 
 Then, display the sum of all positive integers entered using a do-while loop. 
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    int sum = 0;

    do {
       cout << "Enter a number: ";
       cin >> n;

       if (n<0) {
        break;
       }
       sum += n;
    } while (true);
    cout << "The sum of all Positive number is: " << sum << endl;

    return 0;
}
