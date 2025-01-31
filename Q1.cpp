//WAP to read users name and age and output hello name , you are age years old.
#include<iostream>
using namespace std;
int main()
{
    char name[20];
    int age;
    cout<<"Enter Name :- ";
    cin>>name;
    cout<<"Enter Age :- ";
    cin>>age;
    cout<<"Hello "<<name<<", you are "<<age<<" years old.";
}