//WAP to create a simple menu driven calculator that performs addition, subtraction, multiplication and division based on the user's choice and repeat the menu until the user chooses to "Exit".
#include<iostream>
using namespace std;
int main()
{
    int choice;
    float a,b;
    while(1)
    {
        cout<<"1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\nEnter your choice: ";
        cin>>choice;
        if(choice==5)
        {
            cout<<"Exit...";
            break;
        }
        cout<<"Enter two numbers: ";
        cin>>a>>b;
        switch(choice)
        {
            case 1:
            cout<<"Sum = "<<a+b<<endl;
            break;
            
            case 2:
            cout<<"Difference = "<<a-b<<endl;
            break;
            
            case 3:
            cout<<"Product = "<<a*b<<endl;
            break;
            
            case 4:
            cout<<"Quotient = "<<a/b<<endl;
            break;
            
            default:
            cout<<"Invalid choice\n";
        }
    }
    return 0;
}