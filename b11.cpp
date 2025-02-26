#include <iostream>
using namespace std;

int main() {  
    int n;
    cout << "Enter matrix size (n × n): ";
    cin >> n;

    int mat[n][n];
    cout << "Enter matrix elements:\n";
    
    for (int i = 0; i < n; i++)  
        for (int j = 0; j < n; j++)  
            cin >> mat[i][j];

    int sum1 = 0, sum2 = 0;  

    for (int i = 0; i < n; i++) {  
        sum1 += mat[i][i];          // Primary diagonal (same row, same col)
        sum2 += mat[i][n - i - 1];  // Secondary diagonal (row, reverse col)
    }

    cout << "Primary Diagonal Sum: " << sum1 << endl;
    cout << "Secondary Diagonal Sum: " << sum2 << endl;

    return 0;  
}