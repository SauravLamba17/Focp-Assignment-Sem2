//WAP to develop a program that takes two numbers as input and determines if the first as a multiple of the second using relational and logical operators.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    if(a%b==0)
    {
        cout<<a<<" is a multiple of "<<b;
    }
    else
    {
        cout<<a<<" is not a multiple of "<<b;
    }
}