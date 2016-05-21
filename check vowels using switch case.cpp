#include<iostream>
#include<conio.h>
#include<stdio.h>
int main()
{
    using namespace std;
    char ch;
    cout<<" enter a character between a and z";
    cin>>ch;
    switch(ch)
    {
        case'a':
        case'A':
        cout<<" entered character is vowel";
        break;

        case'i':
        case'I':
        cout<<" entered character is vowel";
        break;

        case'o':
        case'O':
        cout<<" entered character is vowel";
        break;

        case'u':
        case'U':
        cout<<" entered character is vowel";
        break;

        case'e':
        case'E':
        cout<<" entered character is vowel";
        break;

        default:
        cout<<"entered character is consonant";
        getch();
    }


    return (0);

}
