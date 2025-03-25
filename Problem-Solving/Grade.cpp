/*
  Write a C++ program that determines the grade of a student based on the marks obtained in an exam, using if-else statements.
*/

#include <iostream>

using namespace std;

int main ()
{
    double marks;
    cout<<"Enter your marks : "<<endl;
    cin>>marks;

 if(marks<=100 && marks>=90)
 {
    cout<<"Your grade is A+ ."<<endl;
 }
 else if(marks<=90 && marks>=85)
 {
     cout<<"Your grade is A."<<endl;
 }
 else if(marks<=85 && marks>=80)
 {
     cout<<"Your grade is B+."<<endl;
 }
 else if(marks<=80 && marks>=75)
 {
     cout<<"Your grade is B."<<endl;
 }
 else if(marks<=75 && marks>=70)
 {
     cout<<"Your grade is C+."<<endl;
 }
 else if(marks<=70 && marks>=65)
 {
     cout<<"Your grade is C."<<endl;
 }
 else if(marks<=65 && marks>=60)
 {
     cout<<"Your grade is D+."<<endl;
 }
 else if(marks<=60 && marks>=50)
 {
     cout<<"Your grade is D."<<endl;
 }
  else if(marks<=50)
 {
     cout<<"You failed, lol!"<<endl;
 }
 else
 {
     cout<<"Invalid output."<<endl;
 }
 return 0;
}

/*
or,
#include <iostream>
using namespace std;

int main () {
    int marks;
    cout << "Enter obtained marks: ";
    cin >> marks;

    if (marks>=90 && marks <=100) {
        cout << "Your grade is: A+" << endl;
    } else if (marks>=80) {
        cout << "Your grade is: A" << endl;
    } else if (marks>=70) {
        cout << "Your grade is: B" << endl;
    } else if (marks>=60) {
        cout << "Your grade is: C" << endl;
    } else if (marks>=50) {
        cout << "Your grade is: D" << endl;
    } else if (marks >=0 && marks<50) {
        cout << "You failed" << endl;
    } else {
        cout << "Invalid Marks" << endl;
    }

    return 0;
}

*/