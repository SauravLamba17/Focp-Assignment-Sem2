//WAP that determines whether a number is prime or not using a while loop.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int i=2;
    if(n==0 || n==1)
    {
        cout<<n<<" is not a Prime Number";
        return 0;
    }
    while(i<n)
    {
        if(n%i==0)
        {
            cout<<n<<" is not a Prime Number";
            break;
        }
        i++;
    }
    if(i==n)
    {
        cout<<n<<" is a Prime Number";
    }
    return 0;
}