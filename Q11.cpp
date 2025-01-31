//WAP to count the number of 1 bits in an integer input by the user.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter integer : ";
    cin>>n;
    cout<<"Number of 1 bits in "<<n<<" = "<<__builtin_popcount(n)<<endl;
    return 0;
}