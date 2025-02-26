// Create a program that finds and displays all Armstrong numbers within a given range using nested loops.

#include <iostream>
#include <cmath>
using namespace std;


// to check a number is iam strong?? 

bool iamstrong(int num) {
int ognum = num, sum = 0, digi = 0;

int celcius = num;

while (celcius > 0) {
    celcius /= 10;
    digi++;  }



    celcius = num;
while (celcius > 0) {
    int digit = celcius % 10;
    sum += pow(digit, digi);
    celcius /= 10; }


    return sum == ognum;
}



void serstrong(int start, int end) {

cout << "Armstrong numbers between " << start << " and " << end << " are:\n";
for (int num = start; num <= end; num++) {
    if (iamstrong(num)) { cout << num << " ";  }
    }


    cout << endl;
}


int main() {
    int sran, eran;


cout << "Enter the start of the range: ";
cin >> sran;
 cout << "Enter the end of the range: ";
cin >> eran;

    serstrong(sran, eran);

    return 0;
}