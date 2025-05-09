/*
Write a C++ program that asks the user to enter numbers and finds the sum of only positive 
numbers. Use a do-while loop to keep taking input. The program should stop if the user 
enters a negative number, but the negative number should not be included in the sum. 
Finally, display the total sum of all positive numbers entered.

or,
 Develop a C++ program that prompts the user to enter integers until they enter a negative number. 
 Then, display the sum of all positive integers entered using a do-while loop. 

*/
#include <iostream>
using namespace std;

int main() 
{
    int n;
    int sum = 0;

    do 
    {
        cout << "Enter a number: ";
        cin >> n;

        if (n >= 0) {
            sum += n;
        }

    } while (n >= 0);

    cout << "The sum of all positive numbers is: " << sum << endl;

    return 0;
}


/*

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

*/
