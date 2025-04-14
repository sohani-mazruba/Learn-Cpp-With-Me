/*

Write a C++ program to count how many even and odd numbers are present in a given array of 10 integers. Your program should:
1. Initialize an array with the values `{1, 2, 3, 4, 5, 6, 7, 8, 9, 99}`.
2. Use a loop to iterate through the array.
3. Use conditions to check whether each element is even or odd.
4. Count the number of even and odd elements separately.
5. Display the count of even and odd numbers.

Expected Output:
4
6

*/

#include <iostream>
using namespace std;

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,99};
    int even=0, odd=0;
    for(int i = 0; i<10; i++)
    {
        if (arr[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }

    }

    cout<<even<<endl<<odd;
}