/*WAP to simulate an ATM machine using a switch statement. Include options for withdawl, deposit, balance inquiry and exit with error handling for invalid input and insufficient balance.*/
#include<iostream>
using namespace std;
int main()
{
    float balance=10000;
    int choice;
    float amount;
    while(1)
    {
        cout<<"Enter 1 for Withdrawl\nEnter 2 for Deposit\nEnter 3 for Balance Inquiry\nEnter 4 to Exit\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"Enter amount to withdraw: ";
            cin>>amount;
            if(amount>balance)
            {
                cout<<"Insufficient Balance\n";
            }
            else
            {
                balance-=amount;
                cout<<"Withdrawl Successful\n";
            }
            break;
            
            case 2:
            cout<<"Enter amount to deposit: ";
            cin>>amount;
            balance+=amount;
            cout<<"Deposit Successful\n";
            break;
            
            case 3:
            cout<<"Balance: "<<balance<<endl;
            break;
            
            case 4:
            cout<<"Exiting...";
            return 0;
            
            default:
            cout<<"Invalid Input\n";
        }
    }
}