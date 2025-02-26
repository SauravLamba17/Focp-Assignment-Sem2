#include <iostream>
using namespace std;

int main() {  
    int n, num, found = 0;  
    cout << "Kitne numbers hain? ";  
    cin >> n;  

    int arr[n];  
    cout << "Number   : ";  
    for (int i = 0; i < n; i++) {  
        cin >> arr[i];  
    }  

    cout << "Kaunsa number dhundhna hai? ";  
    cin >> num;  

    // Linear search shuru  
    for (int i = 0; i < n; i++) {  
        if (arr[i] == num) {  
            cout << "Mil gaya! Position: " << i + 1 << endl;  
            found = 1;  
            break;  
        }  
    }  

    if (!found) {  
        cout << "Nahi mila 😕" << endl;  
    }  

    return 0;  
}