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

    int maxi = arr[0], mini = arr[0];  // Pehle element ko assume kar raha  
    for (int i = 1; i < n; i++) {  
        if (arr[i] > maxi) maxi = arr[i];  
        if (arr[i] < mini) mini = arr[i];  
    }  

    cout << "Max: " << maxi << endl;  
    cout << "Min: " << mini << endl;  

    return 0;  
}