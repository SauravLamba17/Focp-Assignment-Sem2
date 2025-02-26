//Write a program that prints all numbers between 1 and 500, skipping numbers divisible by both 3 and 7. Stop printing numbers if the sum of printed numbers exceeds 1000.

#include <iostream>
using namespace std;

int main() {
    
    int sum = 0;    
    for (int num = 1; num <= 500; num++) {  
        
        if (num % 3 == 0 && num % 7 == 0) {  
            continue;  // Skip kar diya yeh number 
        }
        
        cout << num << " ";   
        sum += num;    

        if (sum > 1000) {    
            cout << "\nBas bhai, sum 1000 cross kar gaya!" << endl;  
            break;  
        }
    }
    
    return 0;
}