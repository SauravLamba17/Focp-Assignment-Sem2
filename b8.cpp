#include <iostream>
#include <set>
using namespace std;

int main() {  
    int n;  
    cout << "Kitne numbers hain? ";  
    cin >> n;  

    int arr[n];  
    cout << "Numbers addd kariye: ";  
    for (int i = 0; i < n; i++) {  
        cin >> arr[i];  
    }  

    set<int> s(arr, arr + n); // Unique elements store karne ke liye set use kiya  
    int longest = 0;  

    for (int num : s) {  
        if (s.find(num - 1) == s.end()) {  // Agar num-1 nahi hai toh ek naya sequence start hoga  
            int currentNum = num;  
            int count = 1;  

            while (s.find(currentNum + 1) != s.end()) {  
                currentNum++;  
                count++;  
            }  

            longest = max(longest, count);  
        }  
    }  

    cout << "Sabse lamba consecutive subsequence: " << longest << endl;  

    return 0;  
}