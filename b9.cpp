#include <iostream>
using namespace std;

int main() {  
    int r, c;  
    cout << "Rows aur columns kitne hai: ";  
    cin >> r >> c;  

    int mat[r][c], trans[c][r];  

    cout << "Matrix ke elements :\n";  
    for (int i = 0; i < r; i++) {  
        for (int j = 0; j < c; j++) {  
            cin >> mat[i][j];  
        }  
    }  

    // Transpose nikal rahe hain  
    for (int i = 0; i < r; i++) {  
        for (int j = 0; j < c; j++) {  
            trans[j][i] = mat[i][j];  
        }  
    }  

    // Transposed matrix print karna hai  
    cout << "Transpose matrix:\n";  
    for (int i = 0; i < c; i++) {  
        for (int j = 0; j < r; j++) {  
            cout << trans[i][j] << " ";  
        }  
        cout << endl;  
    }  

    return 0;  
}