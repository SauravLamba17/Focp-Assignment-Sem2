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

    bool found = false;

    // Har row me check karenge
    for (int i = 0; i < r; i++) {
        int minCol = 0; // Row ka min element ka index
        for (int j = 1; j < c; j++)
            if (arr[i][j] < arr[i][minCol])
                minCol = j;

        // Ab check karna hai ki yeh max hai kya column me
        bool isSaddle = true;
        for (int k = 0; k < r; k++)
            if (arr[k][minCol] > arr[i][minCol]) {
                isSaddle = false;
                break;
            }

        if (isSaddle) {
            cout << "Saddle Point Found -> " << arr[i][minCol] << endl;
            found = true;
        }
    }

    if (!found) cout << "Koi Saddle Point nahi mila!\n";

    return 0;
}