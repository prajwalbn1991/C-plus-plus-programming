#include<iostream>
#include<conio.h>
#include<stdio.h>
int main()
{

   using namespace std;
    int year;
    cout<<"\n Enter a year in YYYY format";
    cin>>year;
    if (year%4==0)
    {
        cout<<"\n Entered year is leap year";
    }
    else
{
    cout<<"\n Entered year is not leap year";
}
getch();
return (0);
}

