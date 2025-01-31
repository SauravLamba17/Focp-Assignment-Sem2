//WAP to check if a triangle is valid or not based on the lengths of it sides and determine its type (equilateral, isosceles or scalene) using nested-if statements.
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the lengths of the sides of the triangle: ";
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && c+a>b)
    {
        if(a==b && b==c)
        {
            cout<<"Equilateral Triangle";
        }
        else if(a==b || b==c || c==a)
        {
            cout<<"Isosceles Triangle";
        }
        else
        {
            cout<<"Scalene Triangle";
        }
    }
    else
    {
        cout<<"Invalid Triangle";
    }
}