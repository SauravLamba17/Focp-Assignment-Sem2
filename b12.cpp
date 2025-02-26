#include <iostream>
using namespace std;

int main() {  
    int r, c;   
    cout << "Rows and cols : ";  
    cin >> r >> c;    

    int arr[r][c];    

    cout << "Matrix :\n";  
    for (int i = 0; i < r; i++)    
        for (int j = 0; j < c; j++)    
            cin >> arr[i][j];    

    int maxSum = 0, maxRow = 0;   

    for (int i = 0; i < r; i++) {    
        int sum = 0;   
        for (int j = 0; j < c; j++)  
            sum += arr[i][j];    

        if (sum > maxSum) {   
            maxSum = sum;    
            maxRow = i + 1;  // 1-based index
        }
    }

    cout << "Sabse zyada sum row " << maxRow << " ka hai: " << maxSum << endl;    
    return 0;    
}