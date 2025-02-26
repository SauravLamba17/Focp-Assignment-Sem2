//Create a program to find the first number greater than 50 that is divisible by 7.

#include <iostream>
using namespace std;

// Yeh function bas 50 se bada pehla number dhund raha jo 7 se divide ho jaye

int findNumber() {    
    int num = 51;  

    while (num % 7 != 0) {  
        num++;    }

    return num;  
}

int main() {
    cout << "first number jo 50 se bada hai aur 7 se divide hota hai: " << findNumber() << endl;   
    return 0;  
}