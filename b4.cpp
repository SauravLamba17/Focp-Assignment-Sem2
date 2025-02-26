#include <iostream>
using namespace std;

int main() {  
    int n;  
    cout << "Kitne numbers hain? ";  
    cin >> n;  

    int arr[n], sum = 0;  
    cout << "Numbers hu???: ";  
    for (int i = 0; i < n; i++) {  
        cin >> arr[i];  
        sum += arr[i];  // Total sum bana raha  
    }  

    float avg = (float)sum / n;  // Average nikal raha  
    cout << "Sum: " << sum << endl;  
    cout << "Average: " << avg << endl;  

    return 0;  
}