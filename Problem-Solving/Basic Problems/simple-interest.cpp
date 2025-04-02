/*
 Develop a C++ program that calculates the simple interest based on the principal amount, rate of interest, and time period provided by the user, 
 using appropriate data types and mathematical computations.
*/

#include <iostream>
using namespace std;

int main () {
    double principal, rate, time, sim_int;
    cout << "Enter Principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest(In Percentage): ";
    cin >> rate;
    cout << "Enter time period(In Years): ";
    cin >> time;

    sim_int = (principal*rate*time)/100.0; // using 100.0 to ensure floating-point division rather than integer division. Otherwise, it will lead to incorrect calculations.
    cout << "Simple Interest is: " << sim_int << endl;

    return 0;
}
