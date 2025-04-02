/*
  Develop a C++ program that calculates the factorial of a given number entered by the user using a do-while loop. 
*/

#include <iostream>
using namespace std;

int main () {
    int number;
    int factorial = 1;
    cout << "Enter a number: ";
    cin >> number;

    int i=number;
    do {
        factorial *= i;
        i--;
    } while (i>0);
    cout << "Factorial of " << number << " is: " << factorial << endl;

    return 0;
}

/*
or,

#include <iostream>
using namespace std;

int main () {
    int n,i;
    int f= 1;
    cout << "Enter a number: ";
    cin >> n;

  for(i=1; i<=n; i++)
  {
    f = f*i;
  }
    cout << "Factorial of " << n << " is: " << f << endl;

    return 0;
}

*/