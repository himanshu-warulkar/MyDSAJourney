#include <iostream>
using namespace std;

int main() {
    int m, n, p, q;

    // Input matrix dimensions
    cout << "Enter the number of rows in the 1st matrix: ";
    cin >> m;
    cout << "Enter the number of columns in the 1st matrix: ";
    cin >> n;
    cout << "Enter the number of rows in the 2nd matrix: ";
    cin >> p;
    cout << "Enter the number of columns in the 2nd matrix: ";
    cin >> q;

    // Check if multiplication is possible
    if (n == p) {
        int a[m][n], b[p][q], res[m][q];

        // Input first matrix
        cout << "Enter the elements of the 1st matrix: " << endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }

        // Input second matrix
        cout << "Enter the elements of the 2nd matrix: " << endl;
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < q; j++) {
                cin >> b[i][j];
            }
        }

        // Initialize the result matrix to 0
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                res[i][j] = 0;
            }
        }

        // Perform matrix multiplication
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                for (int k = 0; k < n; k++) {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        // Output the resultant matrix
        cout << "The resultant matrix after multiplication is: " << endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }

    } else {
        cout << "Matrix multiplication is not possible since the number of columns in the 1st matrix is not equal to the number of rows in the 2nd matrix." << endl;
    }

    return 0;
}
