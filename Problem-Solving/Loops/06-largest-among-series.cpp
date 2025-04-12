/*
   Write a C++ program to find the largest among a series of numbers entered by the user. 
   Keep prompting the user to enter numbers until they decide to stop using a do-while loop.
*/

#include <iostream>
using namespace std;

int main() {
    int number;
    int largest;
    int i = 1;

    cout << "Enter 0 (Zero) to exit." << endl;

    // First input (outside the loop)
    cout << "Enter number " << i << ": ";
    cin >> number;

    if (number == 0) {
        cout << "No numbers were entered." << endl;
        return 0;
    }

    largest = number;
    i++;

    // Now continue with do-while loop
    do {
        cout << "Enter number " << i << ": ";
        cin >> number;

        if (number != 0 && number > largest) {
            largest = number;
        }

        i++;
    } while (number != 0);

    cout << "Largest: " << largest << endl;

    return 0;
}

/*#include <iostream>
using namespace std;

int main () {
    int number;
    int largest = 0;

    cout << "Enter 0(Zero) to exit." << endl;
    int i = 1;
    do {
        cout << "Enter number " << i << ": ";
        cin >> number;

        if (number>largest) {
            largest = number;
        }
        i++;
    } while (number!=0);
    cout << "Largest: " << largest << endl;

    return 0;
}
*/