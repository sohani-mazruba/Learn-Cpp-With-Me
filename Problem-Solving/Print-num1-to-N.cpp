/*
Write a C++ program that takes an integer N and two divisors (X and Y) along with two words. 
Print all numbers from 1 to N, following these rules:
- If a number is divisible by X, print your first name.
- If a number is divisible by Y, print your last name.
- If a number is divisible by both X and Y, print the combination of the two words.
- Otherwise, print the number itself.
*/

#include <iostream>
using namespace std;


int main() {
    int N, X, Y;
  string firstName, lastName;

    cout << "Enter (N): ";
  cin >> N;
    cout << "Enter first divisor (X): ";
    cin >> X;
   cout << "Enter second divisor (Y): ";
   cin >> Y;
   cout << "Enter your first name: ";
    cin >> firstName;
   cout << "Enter your last name: ";
    cin >> lastName;


    for (int i = 1; i <= N; ++i) {
        if (i % X == 0 && i % Y == 0) {
            cout << firstName + lastName << endl;
        } else if (i % X == 0) {
            cout << firstName << endl;
        } else if (i % Y == 0) {
            cout << lastName << endl;
        } else {
            cout << i << endl;
        }
    }

    return 0;
}
