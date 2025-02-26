#include <iostream>
using namespace std;

int main() {  
    int r, c;  
    cout << "Rows, cols : ";  
    cin >> r >> c;  

    int arr[r][c];  
    cout << "Matrix :\n";  
    for (int i = 0; i < r; i++)  
        for (int j = 0; j < c; j++)  
            cin >> arr[i][j];  

    cout << "Boundary elements: ";  

    // First row  
    for (int j = 0; j < c; j++)  
        cout << arr[0][j] << " ";  

    // Last column  
    for (int i = 1; i < r; i++)  
        cout << arr[i][c - 1] << " ";  

    // Last row (right to left)
    if (r > 1)  
        for (int j = c - 2; j >= 0; j--)  
            cout << arr[r - 1][j] << " ";  

    // First column (bottom to top)
    if (c > 1)  
        for (int i = r - 2; i > 0; i--)  
            cout << arr[i][0] << " ";  

    cout << endl;  
    return 0;  
}