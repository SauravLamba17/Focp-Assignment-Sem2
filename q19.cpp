//WAP that calculates the grade of a student based on the marks using if-else/switch statements.
#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter marks: ";
    cin>>marks;
    if(marks>100 || marks<0)
    {
        cout<<"Invalid marks";
    }
    else if(marks>=90)
    {
        cout<<"Grade: A";
    }
    else if(marks>=80)
    {
        cout<<"Grade: B";
    }
    else if(marks>=70)
    {
        cout<<"Grade: C";
    }
    else if(marks>=60)
    {
        cout<<"Grade: D";
    }
    else if(marks>=50)
    {
        cout<<"Grade: E";
    }
    else
    {
        cout<<"Grade: F";
    }
    return 0;
}