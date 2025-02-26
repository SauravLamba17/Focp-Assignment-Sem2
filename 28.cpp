//Develop a program to simulate a number-guessing game where the user has limited attempts to guess a randomly generated number. Provide feedback for each guess (too high, too low) and terminate the game when the number is guessed or attempts are exhausted.

#include <iostream>
#include <cstdlib>  
#include <ctime> 
using namespace std;


// random number ke liye
int getran(int l, int h) {  
    return l + rand() % (h - l + 1);
}


// Yeh function game run karega with a given number of attempts
void game(int maxatt) {  
    srand(time(0));  // Random seed lagaya taki har baar naye numbers aaye

    int secret = getran(1, 10);  // 1 se 10 tak ka ek random number
    int guess;  // User ka input store karne ke liye
    int atm = 0;

    cout << "Number Guessing Game Start! (1-10)\n";
    cout << "Aapke paas " << maxatt << " attempts hain. Chaliye shuru karein!\n\n";



    // loop game kahtam hone tak

    while (atm < maxatt) {  

        cout << "Apna guess enter karo: ";
        cin >> guess;

        if (guess < 1 || guess > 10) {  // Invalid input case
            cout << "Arre bhai, 1 se 10 ke beech ka number daalna tha!\n";
            continue;  // Galat input toh attempt count mat karo
        }

        atm++;

        if (guess == secret) {  
            cout << "Badhai ho! Aapne sahi guess kar liya 🎉 " << atm << " attempts mein.\n";
            return;
        } else if (guess > secret) {  
            cout << "Zyada bada hai! Thoda chhota socho.\n";
        } else {  
            cout << "Chhota hai! Thoda bada socho.\n";
        }

        // Bachhe hue attempts dikhane ke liye
        cout << "Bachhe hue attempts: " << (maxatt - atm) << "\n\n";
    }

    // Agar yaha tak aa gaya toh attempts khatam ho gaye
    cout << "Oh no! Aapke saare attempts khatam ho gaye. 😔\n";
    cout << "Woh number tha: " << secret << "\n";
}





int main() { 

int max = 3; 

game(max);

return 0;
}