//Develop a program to reverse the digits of a given number and terminate early if the reversed number becomes a palindrome.

#include <iostream>
using namespace std;

// Yeh function number ko ulta karega
int ultaKar(int num) {   
    int naya = 0, original = num;   
    while (num > 0) {  
        naya = naya * 10 + (num % 10);  // Last digit ko aage daal rahe
        num = num / 10;    
    }
    return naya;  
}

// Yeh check karega ki palindrome hai ya nahi
bool sameHai(int num) {  
    return num == ultaKar(num);  
}

int main() { 
    
    int  n;  
    cout << "Number do plsss: ";  
    cin >> n;   

    int prev = -1;  // Loop detect karne ke liye (kabhi -1 nahi hoga)
    
    while (true) { 
        
        int reversed = ultaKar(n);   // Reverse kar diya
        cout << "Ulta number: " << reversed << endl;  

        if (sameHai(reversed)) {  
            cout << "wait Palindrome mil gaya! 🔥 -> " << reversed << endl;    
            break;  // Kaam ho gaya
        }

        if (reversed == prev) {  // Loop detect karne ke liye
            cout << "yeh toh loop ban gaya! Ruk raha hu..." << endl;
            break;
        }

        prev = n;  // Purana number store kar diya taaki loop detect ho
        n = reversed;  // Reverse store kar diya, next check ke liye
    }

    return 0;  
}