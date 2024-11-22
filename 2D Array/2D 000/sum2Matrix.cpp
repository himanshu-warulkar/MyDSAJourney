//sum of two matrix
#include <iostream>
using namespace std;
int main(){
    int m, n, p, q;
    cout<<"Enter the number of rows in first matrix: ";
    cin >> m;
    cout <<"Enter the number of columns in first matrix ";
    cin >> n;

    int arr[m][n];

    cout <<"Enter the elements in the first matrix: ";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
        cout << endl;
    }

    cout <<"The first matrix is: " << endl ;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << arr[m][n] << " ";
        }
        cout << endl;
    } 



    cout<<"Enter the number of rows in second matrix: ";
    cin >> p;
    cout <<"Enter the number of columns in second matrix ";
    cin >> q;

    if (m != p || n != q) {
        cout << "Matrices must have the same dimensions to be summed." << endl;
        return 1; 
    }

    int brr[p][q];

    cout <<"Enter the elements in second matrix is: " ;
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            cin >> brr[i][j] ;
        }
        cout << endl;
    }

    cout <<"The first matrix is: " << endl ;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    } 


    cout <<"The second matrix is: " << endl ;
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }

    int sum [m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            sum[i][j] =arr[i][j] + brr[i][j];
        }
        cout << endl;
        
    }
    cout << "The sum of matrix is: ";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

