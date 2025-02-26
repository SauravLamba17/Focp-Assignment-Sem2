//Write a program to calculate the Least Common Multiple (LCM) and Greatest Common Divisor (GCD) of two integers.

#include <iostream>
using namespace std;

// GCD nikalne ka simple tareeka
int gcd(int a, int b) {  
    while (b != 0) {  
        int temp = b;  
        b = a % b;  
        a = temp;  
    }  
    return a;  
}

// LCM ka formula use kar raha hu
int lcm(int a, int b) {  
    return (a * b) / gcd(a, b);  
}

int main() {  
    int x, y;  
    cout << "Do number do pleassssss: ";  
    cin >> x >> y;  

cout << "GCD: " << gcd(x, y) << endl;  
cout << "LCM: " << lcm(x, y) << endl;  

    return 0;  
}