//WAP that solves a quadratic equation of the form ax^2+bx+c=0 using conditional statements to handle all handle all possible cases(real and distinct cases, real and equal roots, complex roots).
    #include<iostream>
    #include<math.h>
    using namespace std;
    int main()
    {
        float a,b,c;
        cout<<"Enter coefficients of quadratic equation:- \n";
        cin>>a>>b>>c;
        float d=b*b-4*a*c;//discrimant
        if(d>0)
        {
            float r1=(-b+sqrt(d))/(2*a);
            float r2=(-b-sqrt(d))/(2*a);
            cout<<"Roots are real and distinct: "<<r1<<" and "<<r2;
        }
        else if(d==0)
        {
            float r=-b/(2*a);
            cout<<"Roots are real and equal: "<<r;
        }
        else
        {
            float realPart=-b/(2*a);
            float imaginaryPart=sqrt(-d)/(2*a);
            cout<<"Roots are complex and imaginary: "<<realPart<<" + "<<imaginaryPart<<"i and "<<realPart<<" - "<<imaginaryPart<<"i";
        }
        return 0;
    }