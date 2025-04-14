/*
Question:

Write a C++ program to read the marks of 5 students and calculate the total marks. Your program should:

1. Use an array to store the marks of each student.
2. Prompt the user to enter the marks for each student.
3. Calculate the total marks using a loop.
4. Display the total marks of all 5 students.


Sample Output:

Enter total marks for 5 students -
Student 1: 85
Student 2: 90
Student 3: 78
Student 4: 88
Student 5: 95
Total marks of 5 students: 436

*/
#include <iostream>
using namespace std;

int main()
{
    int marks[5];
    float total_marks = 0;

    cout << "Enter total marks for 5 students -" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << "Student " << i + 1 << ": ";
        cin >> marks[i];
        total_marks += marks[i];
    }

    cout << "Total marks of 5 students: " << total_marks << endl;

    return 0;
}
