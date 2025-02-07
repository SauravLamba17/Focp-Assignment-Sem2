//WAP to perform division without using the / operator implementing both integer and floating point division manually.
#include <iostream>
#include <cmath> 
using namespace std;
int main() 
{
    double a, b;
    cout<<"Enter dividend: ";
    cin>>a;
    cout<<"Enter divisor: ";
    cin>>b;
    if(b==0)
    {
        cout <<"Error: Division by zero is not allowed!"<<endl;
        return 1;
    }
    double dividend=(a);
    double divisor=(b);
    // Integer part calculation
    int quotient=0;
    double remainder=dividend;
    while (remainder>=divisor) 
    {
        remainder-=divisor;
        quotient++;
    }
    // Floating point part calculation (up to 6 decimal places)
    double fraction=0.0;
    double factor=0.1;
    for (int i=0;i<6;i++) 
    {
        remainder*=10;
        int digit=0;
        while (remainder>=divisor)
        {
            remainder-=divisor;
            digit++;
        }
        fraction+=digit*factor;
        factor/=10;
    }
    // Final result
    double result=(quotient+fraction);
    cout <<"The quotient is: "<<result<< endl;
    return 0;
}
