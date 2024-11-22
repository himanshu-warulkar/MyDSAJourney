//To find the maximum element in 2D Array
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

    cout <<"Enter the array is: " << endl ;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    
    }
    int max = arr[0][0];
    
     for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(max < arr[i][j]) max = arr[i][j];
        }
        cout << endl;
        
    }
    cout <<"The maximum element is: " << max << " ";




    return 0;
}

