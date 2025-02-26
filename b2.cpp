#include <iostream>
using namespace std;

int main() {  
    int n;  
    cout << "Kitne elements hain? ";  
    cin >> n;  

    int arr[n];  
    cout << "Numbers enter karo: ";  
    for (int i = 0; i < n; i++) {  
        cin >> arr[i];  
    }  

    cout << "Reverse order me: ";  
    for (int i = n - 1; i >= 0; i--) {  
        cout << arr[i] << " ";  
    }  

    cout << endl;  
    return 0;  
}