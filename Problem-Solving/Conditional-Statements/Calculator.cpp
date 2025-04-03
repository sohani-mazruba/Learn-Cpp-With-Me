/*
  Write a C++ program that implements a simple calculator capable of performing 
  addition, subtraction, multiplication, and division operations using a switch-case statement for operation selection.
*/

#include <iostream>
using namespace std;

int main () {
    char choice;
    double num1, num2, result;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter operator(+,-,*,/): ";
    cin >> choice;

    switch (choice) {
    case '+':
        result = num1 + num2;
        cout << num1 << "+" << num2 << "= " << result << endl;
        break;
    case '-':
        result = num1 - num2;
        cout << num1 << "-" << num2 << "= " << result << endl;
        break;
    case '*':
        result = num1 * num2;
        cout << num1 << "*" << num2 << "= " << result << endl;
        break;
    case '/':
        if (num2!=0) {
            result = num1 / num2;
            cout << num1 << "/" << num2 << "= " << result << endl;
        } else {
            cout << "Cannot divide by 0(Zero)" << endl;
        }
        break;
    default:
        cout << "Invalid Operator." << endl;
        break;
    }

    return 0;
}



/*
#include <iostream>
using namespace std;

int main()
{
    double n1,n2,result;
    int choice;
    cout<<"Enter n1: ";
    cin>>n1;
    cout<<"Enter n2: ";
    cin>>n2;
    cout<<"Enter 1 for Addition: "<<endl;
    cout<<"Enter 2 for Subtraction: "<<endl;
    cout<<"Enter 3 for Multiplication: "<<endl;
    cout<<"Enter 4 for Division: "<<endl;
    cin>>choice;

    switch(choice)
    {
    case 1:
        result = n1+n2;
        cout<< "Addition: "<< result <<endl;
        break;

    case 2:
        result = n1-n2;
        cout<< "Subtraction: "<< result <<endl;
        break;

    case 3:
        result = n1*n2;
        cout<< "Multiplication: "<< result <<endl;
        break;

    case 4:
        if (n2!=0)
        {
        result = n1/n2;
        cout<< "Division: "<< result <<endl;
        }
        else
        {
        cout << "Can't be divided by 0."<<endl;
        }
        break;

    default:
        cout<< "Invalid choice! Please enter a number between 1 and 4.";
        break;

    }
}
*/