/*

Write a C++ program that performs the following operations on an array of 5 integers:
1. Accept 5 integer inputs from the user and store them in an array.
2. Display the array elements in the order they were entered.
3. Find and display the largest element in the array.
4. Display the array elements in reverse order.

*/

#include<iostream>
using namespace std;

int main()
{
    int arr[5];


    for(int i=0; i<5; i++)
    {
        cout<<"Enter number: ";
        cin>>arr[i];
    }

    cout<<"Array elements in the order: ";
    for(int i=0; i<5; i++)
    {

        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int largest = 0;
    for(int i=0; i<5; i++)
    {
        if(arr[i]>largest)
         largest=arr[i];
    }
    cout<<"Largest value: "<<largest<<endl;

    cout<<"Array elements in reverse order: ";
    for(int i=4; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}