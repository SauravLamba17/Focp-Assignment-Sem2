//WAP to calculate the factorial of a given number using do-while loop.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int fact=1;
    int i=1;
    do
    {
        fact = fact*i;
        i++;
    }while(i<=n);
    cout<<"Factorial of "<<n<<" is : "<<fact;
    return 0;
} 