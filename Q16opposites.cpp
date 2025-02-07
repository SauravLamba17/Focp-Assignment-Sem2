//WAP that determines whether two integers are opposite in sign without using conditional statements(hint : use bitwise XOR)
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    if((a^b)<0)
    {
        cout<<"Opposite signs";
    }
    else
    {
        cout<<"Same signs";
    }
    return 0;
}