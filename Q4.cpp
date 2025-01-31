//WAP to take two floating-point numbers as input and display their division result with two decimal places
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b;
    cout<<"Enter two floating-point numbers: ";
    cin>>a>>b;
    cout<<"Division result with two decimal places: "<<fixed<<setprecision(2)<<a/b;
    return 0;
}