#include <iostream>
using namespace std;

int main() {  
    int r1, c1, r2, c2;  
    cout << "Enter rows and columns of first matrix: ";  
    cin >> r1 >> c1;  
    cout << "Enter rows and columns of second matrix: ";  
    cin >> r2 >> c2;  

    if (c1 != r2) {  
        cout << "Multiplication not possible! Columns of first must match rows of second.\n";  
        return 0;  
    }  

    int a[r1][c1], b[r2][c2], c[r1][c2];  


    for (int i = 0; i < r1; i++)  
        for (int j = 0; j < c2; j++)  
            c[i][j] = 0;    

    cout << "Enter first matrix elements:\n";  
    for (int i = 0; i < r1; i++)  
        for (int j = 0; j < c1; j++)  
            cin >> a[i][j];  

    cout << "Enter second matrix elements:\n";  
    for (int i = 0; i < r2; i++)  
        for (int j = 0; j < c2; j++)  
            cin >> b[i][j];  

    // Matrix Multiplication  
    for (int i = 0; i < r1; i++) {  
        for (int j = 0; j < c2; j++) {  
            for (int k = 0; k < c1; k++) {  
                c[i][j] += a[i][k] * b[k][j];  
            }  
        }  
    }  

    cout << "Resultant Matrix:\n";  
    for (int i = 0; i < r1; i++) {  
        for (int j = 0; j < c2; j++) {  
            cout << c[i][j] << " ";  
        }  
        cout << endl;  
    }  

    return 0;  
}