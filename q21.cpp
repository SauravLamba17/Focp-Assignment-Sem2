//WAP to check whether a year is a leap year or not using nested if-else statements.
#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter Year: ";
    cin>>year;
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                cout<<"Leap Year";
            }
            else
            {
                cout<<"Not a Leap Year";
            }
        }
        else
        {
            cout<<"Leap Year";
        }
    }
    else
    {
        cout<<"Not a Leap Year";
    }
    return 0;
}