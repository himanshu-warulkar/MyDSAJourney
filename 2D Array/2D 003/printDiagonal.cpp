#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    int arr[n][n];

    // Input the matrix
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Output the matrix
    cout << "The entered matrix is: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Print diagonal elements
    cout << "The diagonal elements are: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Main diagonal: i == j, Secondary diagonal: i + j == n - 1
            if (i == j || i + j == n - 1) {
                cout << arr[i][j] << " ";
            } else {
                cout << "  ";  // Print space to align the output
            }
        }
        cout << endl;
    }

    return 0;
}
