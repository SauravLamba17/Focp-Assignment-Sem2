#include <iostream>
using namespace std;

int main() {  
    int n;  
    cout << "Kitne numbers hain? ";  
    cin >> n;  

    int arr[n];  
    cout << "Numbers add karo fir: ";  
    for (int i = 0; i < n; i++) {  
        cin >> arr[i];  
    }  

    // Simple sorting (Bubble Sort)
    for (int i = 0; i < n - 1; i++) {  
        for (int j = 0; j < n - i - 1; j++) {  
            if (arr[j] > arr[j + 1]) {  
                swap(arr[j], arr[j + 1]);  // Chhota aage, bada peeche  
            }  
        }  
    }  

    cout << "Sorted array: ";  
    for (int i = 0; i < n; i++) {  
        cout << arr[i] << " ";  
    }  
    cout << endl;  

    return 0;  
}