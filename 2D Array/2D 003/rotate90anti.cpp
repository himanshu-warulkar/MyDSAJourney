#include <iostream>
using namespace std;

int main(){
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;

    cout << "Enter the number of columns: ";
    cin >> n;

    int arr[m][n];

    // Input the matrix
    cout << "Enter the elements in the array: " << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    // Output the matrix
    cout << "The original matrix is: " << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Transpose the matrix (swap arr[i][j] with arr[j][i])
    for(int i = 0; i < m; i++){
        for(int j = i+1; j < n; j++){  // start j from i+1 to avoid redundant swaps
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Reverse each column of the transposed matrix
    for(int j = 0; j < n; j++){
        for(int i = 0; i < m/2; i++){  // reverse column by swapping top and bottom
            swap(arr[i][j], arr[m-i-1][j]);
        }
    }

    // Output the final matrix rotated 90 degrees anticlockwise
    cout << "The matrix after rotating 90 degrees anticlockwise: " << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
