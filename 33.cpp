//Create a program that determines whether a given floating-point number can be represented exactly in binary format and explains why (hint: binary representation of floating-point numbers).

#include <iostream>
#include <iomanip>
using namespace std;

// Check karega ki number binary me exact hai ya nahi
bool check(double x) {  
    return (x == (double)x);  
}

int main() {  
    double n;  
    cout << "Number ?????: ";  
    cin >> n;  

    if (check(n)) {  
        cout << fixed << setprecision(20);  
        cout << "Haan, yeh number binary me exactly store ho sakta hai! ✅ -> " << n << endl;  
    } 
    else {  
        
        cout << "Nahi, yeh number binary me perfect store nahi ho sakta! ❌" << endl;  
        cout << "Reason: Kuch numbers ka binary conversion infinite hota hai (jaise 0.1, 0.2, etc.)." << endl;  
    }

    return 0;  
}