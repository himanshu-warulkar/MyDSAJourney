#include <iostream>
using namespace std;

int main() {
    int m;
    cout << "Enter the number of rows: ";
    cin >> m;

    int n;
    cout << "Enter the number of columns: ";
    cin >> n;

    int arr[m][n];

    cout << "Enter the elements in the array: " << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "The array is: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "The wave-form of the given matrix is: " << endl;
    for (int j = 0; j < n; j++) {
        if (j % 2 == 0) {
            // For even indexed columns, go top to bottom
            for (int i = 0; i < m; i++) {
                cout << arr[i][j] << " ";
            }
        } else {
            // For odd indexed columns, go bottom to top
            for (int i = m - 1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
