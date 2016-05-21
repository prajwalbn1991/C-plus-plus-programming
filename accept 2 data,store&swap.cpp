#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<conio.h>
int main()
{
    clrscr();
    using namespace std;
    int x,y,z;

    cout<<"Enter 2 values for X and Y";
    cin>>x;
    cin>>y;

    cout<<"\n x="<<x;
    cout<<"\n y="<<y;
clrscr();
    z= x;
    x = y;
    y = z;
    cout<<"\n X="<<x;
    cout<<"\n Y="<<y;

    getch();
    return (0);
}
