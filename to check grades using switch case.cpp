#include<iostream>
#include<conio.h>
#include<stdio.h>
int main()
{

    using namespace std;
    char grade;
    cout<<"grade table";
    cout<<"\n";
    cout<<"\n Grade A ";
    cout<<"\n Grade B ";
    cout<<"\n Grade c ";
    cout<<"\n Grade D ";
    cout<<"\n Grade E ";
    cout<<"\n";
    cout<<"Now enter the grade as mentioned above, to know student's marks";
    cin>>grade;
    switch(grade)
    {
    case'A':
    cout<<" Student percentage is 75 and above ";
    break;

    case 'B':
    cout<<"Student percentage is 65 to 74";
    break;

    case 'C':
    cout<<"Student percentage is 55 to 64";
    break;

    case 'D':
    cout<<"Student percentage is 40 to 54";
    break;


    case 'E':
    cout<<"Fail";
    break;

    default:
    cout<<"You have entered invalid grade";
    }
    getch();
    return 0;
    }

