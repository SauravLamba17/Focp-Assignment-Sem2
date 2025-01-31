//WAP to compute compound inerest  for a given principal amount,rate of interest and time period using constants and user input for variables.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float p,r,t,ci;
    float n=12;
    cout<<"Enter principal amount: ";
    cin>>p;
    cout<<"Enter rate of interest: ";
    cin>>r;
    cout<<"Enter time period: (in years)";
    cin>>t;
    ci=p*pow((1+r/(n*100)),n*t)-p;
    cout<<"Compound Interest = "<<ci;
    return 0;
}