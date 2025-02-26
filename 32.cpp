//Write a program that takes an integer array from the user and finds the second largest element.

#include <iostream>
using namespace std;

int secondLargest(int arr[], int size) {  
    int first = -1, second = -1;  

    for (int i = 0; i < size; i++) {  
        if (arr[i] > first) {  
            second = first;  
            first = arr[i];  
        } 
        else if (arr[i] > second && arr[i] != first) {  
            second = arr[i];  
        }
    }

    return second;  
}

int main() {  
    int n;  
    cout << "Kitne elements hain? ";  
    cin >> n;  

    int arr[n];  
    cout << "Array ke elements enter karo: ";  
    for (int i = 0; i < n; i++) {  
        cin >> arr[i];  
    }

    int ans = secondLargest(arr, n);  

    if (ans == -1)  
        cout << "Second largest nahi mila! 🤷‍♂️" << endl;  
    else  
        cout << "Second largest element: " << ans << endl;  

    return 0;  
}