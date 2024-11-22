#include <iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the number of rows: ";
    cin >> m;

    int n;
    cout <<"Enter the number of columns: ";
    cin >> n;

    int arr[m][n];

    cout <<"Enter the elements in the array: ";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
        cout << endl;
    }

    cout <<"The array is: " << endl ;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout <<"The Transpose is: " << endl ;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    int t[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            t[i][j] = arr[j][i];
        }
    }
    cout << endl;

    cout << "The Transpose of matrix (stored) is: "<< endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << t[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

