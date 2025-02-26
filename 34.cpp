//Create a program that takes input for a 2D array and prints the array in a formatted table, ensuring proper alignment of all elements.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {  
    int r, c;  
    cout << "Rows aur Columns enter: ";  
    cin >> r >> c;  

    int arr[r][c];  

    // Input le raha hu  
    cout << "Elements enter karo:\n";  
    for (int i = 0; i < r; i++) {  
        for (int j = 0; j < c; j++) {  
            cin >> arr[i][j];  
        }  
    }  

    // Table print kar raha hu  
    cout << "\nFormatted Table yeh:\n";  
    for (int i = 0; i < r; i++) {  
        for (int j = 0; j < c; j++) {  
            cout << setw(5) << arr[i][j] << " ";  // Proper alignment ke liye setw(5)  
        }  
        cout << endl;  
    }  

    return 0;  
}