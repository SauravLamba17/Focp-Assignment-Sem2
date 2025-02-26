#include <iostream>
using namespace std;

int main() {  
    int n;  
    cout << "Kitne numbers hain? ";  
    cin >> n;  

    int arr[n];  
    cout << "Numbers add karo: ";  
    for (int i = 0; i < n; i++) {  
        cin >> arr[i];  
    }  

    // Duplicate hataane ka funda 
    int temp[n], size = 0;  

    for (int i = 0; i < n; i++) {  
        bool repeat = false;  
        for (int j = 0; j < size; j++) {  
            if (arr[i] == temp[j]) {  
                repeat = true;  
                break;  
            }  
        }  
        if (!repeat) {  
            temp[size] = arr[i];  
            size++;  
        }  
    }  

    // Output without duplicates  
    cout << "Duplicate hata ke naya array: ";  
    for (int i = 0; i < size; i++) {  
        cout << temp[i] << " ";  
    }  
    cout << endl;  

    return 0;  
}