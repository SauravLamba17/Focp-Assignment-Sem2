//WAP to calculate area and perimeter of a rectangle using user-provided length and width.
#include<iostream>
using namespace std;
int main()
{
    float area,perimeter,length,width;
    cout<<"Enter length and width of rectangle: ";
    cin>>length>>width;
    area=length*width;
    perimeter=2*(length + width);
    cout<<"Area is = "<<area<<endl;
    cout<<"Perimeter is = "<<perimeter;
}