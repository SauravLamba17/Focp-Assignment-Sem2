#include <iostream>
using namespace std;

int main() {
    int r, c, x;  
    cout << "Rows, cols : ";  
    cin >> r >> c;  

    int arr[r][c];    
    cout << "Matrix :\n";  
    for (int i = 0; i < r; i++)    
        for (int j = 0; j < c; j++)    
            cin >> arr[i][j];    

    cout << "Kya dhoondhna hai? ";  
    cin >> x;    

    int i = 0, j = c - 1;  // Start from top-right  
    while (i < r && j >= 0) {   
        if (arr[i][j] == x) {    
            cout << "Mila! Position: (" << i + 1 << ", " << j + 1 << ")\n";  
            return 0;    
        }  
        else if (arr[i][j] > x)  
            j--;  // Move left  
        else  
            i++;  // Move down  
    }

    cout << "Nahi mila! 😔\n";  
    return 0;    
}