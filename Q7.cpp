//WAP to swap two numbers using a temporary variable and then without using a temporary variable.
#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Before swapping: a="<<a<<" b="<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping (using 3rd variable) a="<<a<<" b="<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping (without using 3rd variable) a="<<a<<" b="<<b;
}
