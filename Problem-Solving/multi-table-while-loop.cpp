/*
   Write a C++ program that prompts the user to enter a number and then prints the multiplication table of that number using a while loop.
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1;
    while(i<=10) {
        cout << n << "*" << i << "= " << n*i << endl;
        i++;
    }

    return 0;
}