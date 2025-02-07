//WAP that performs a circular left and right shift of bits on a given integer and displays the result.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int n;
    cout<<"Enter number of bits to shift: ";
    cin>>n;
    cout<<"1. Left shift\n2. Right shift\nEnter your choice: ";
    int choice;
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"After left shift: "<<(num<<n);
        break;
        
        case 2:
        cout<<"After right shift: "<<(num>>n);
        break;
        
        default:
        cout<<"Invalid choice";
    }
    return 0;
}