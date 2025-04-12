/*
Write a C++ program that asks the user to enter a single alphabet character and determines whether it is a vowel or a consonant. 

The program should:
- Accept a single character input (uppercase or lowercase).
- Check if the character is a vowel (A, E, I, O, U, a, e, i, o, u).
- If it is not a vowel, check if it is a consonant (any other alphabetic character).
- If the input is not a letter, the program should display an appropriate error message.
*/

#include<iostream>
using namespace std;

int main ()
{
    char ch;
    cout<<"Enter a character : "<<endl;
    cin>>ch;

    ch=tolower(ch);

 if(ch>='a' && ch<='z')
 {
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')

     cout<<ch<<" is a vowel."<<endl;

 else

     cout<<ch<<" is a consonant."<<endl;

 }

 else
 {
     cout<<"This is not an Alphabet. Invalid output." <<endl;
 }

 return 0;

}

/*
or,
#include <iostream>
using namespace std;

int main() {

    char c;
    cout << "Enter a character: ";
    cin >> c;

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')

    {
        cout << c << " is a vowel." << endl;
    }
    else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        cout << c << " is a consonant." << endl;
    }
    else
    {
        cout << "Not a character." << endl;
    }

    return 0;

}*/
