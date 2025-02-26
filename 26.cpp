//Write a program to generate and display the first n prime numbers using a combination of for and while loops.

#include <iostream> 
using namespace std;


int main() {

int n, count = 0, num = 2;

cout << "Enter kitne prime number chiye?: ";
cin >> n;

    while (count < n) {   // running for loop till n
        bool isPrime = true;

for (int i = 2; i < num; i++) {   // checking prime num
    if (num % i == 0) {
     isPrime = false;

 break; }  }

        if (isPrime) { 
        cout << num << " ";
        count++;
        }

        num++;  
        } //while khatam

    cout << endl;
    return 0;
}