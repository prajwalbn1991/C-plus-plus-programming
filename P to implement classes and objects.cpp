#include<iostream>
#include<conio.h>
class student
{
using namespace std;
int studentID;
char studentname[15];

public:
    void acceptdata()
    {
        cout<<"Enter the student ID and student name";
        cin>>studentID>>studentName;
    }
    void displaydata()
    {
        cout<<"studentID<<"\t"<<student name"<<endl;
    }
};
void main()
{
    student obj;
    clrscr();
    obj.acceptdata();
    obj.displaydata();
    getch();
}

