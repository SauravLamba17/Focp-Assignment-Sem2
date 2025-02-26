/* Create a program that continuously accepts user input of integers until the user types "exit".
At the end, display:
• The sum of all entered numbers.
• The count of valid integers entered.
• The maximum and minimum numbers. */

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool corr(string in) {   //check corr or not

//empty, number, positive

    if (in.empty()) return false;

    if (in[0] == '-') return false;

int ss = in.size();
    for (int i = 0; i < ss; i++) { 
               if (!isdigit(in[i])) {
            return false;  } }

    return true;

}



int main() {

    string in;
    int num, sum = 0, count = 0;
    int max = 0; 
    int min = 0;

//loop ke start

 do {

        cout << "Enter a positive integer or to stop enter 'exit' :  ";
        cin >> in;

        if (in == "exit") 
        break; //kam katam



if (corr(in) == 1) {
        num = stoi(in);
        count ++;
        sum += num;



    if (count == 1) {
            max = min = num; } 
            else {
        if (num > max) max = num;
        if (num < min) min = num;  }
         }
 }
    while (in != "exit");  // Infinite loop until pc gaya...

//result ke liye

    if (count > 0) {
        cout << "\nPura result.:\n";
        cout << "Sum: " << sum << endl;
        cout << "Count: " << count << endl;
        cout << "Max: " << max << endl;
        cout << "Min: " << min << endl;
    } 
    
    else {
        cout << "kam se kam ek to sahi integer enter kar lete." << endl;}

    return 0; }
