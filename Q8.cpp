//WAP to take user's full name and age as input and displays a greeting with the name and number of days they have lived
#include<iostream>
using namespace std;
int main()
{
    char name[20];
    int age,days;
    cout<<"Enter your Name:- ";
    cin>>name;
    cout<<"Enter age:- ";
    cin>>age;
    days=age*365;
    cout<<"Hello "<<name<<", you are "<<days<<" days old.";
}