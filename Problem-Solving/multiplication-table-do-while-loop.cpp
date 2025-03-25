/*
   Write a C++ program to prompt the user to enter a number and then display the multiplication table of that number using a do-while loop.
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1;
    do {
        cout << n << "*" << i << "= " << n*i << endl;
        i++;
    } while(i<=10);

    return 0;
}
