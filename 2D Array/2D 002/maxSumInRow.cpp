//print the row number having maximum sum in given matrix.
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

    cout <<"Enter the elements in the array: " << endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
        
    }

    cout <<"Entered array is: " << endl ;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    
    }
    int maximum = 0;
    int index = -1;
    for(int i=0; i<m; i++){
        int sum = 0;
        for(int j=0; j<n; j++){
            sum += arr[i][j];
        }
        cout << endl;
        
        if(maximum < sum){
            maximum = sum;
            index = i;
        }
    
    }
    
    cout <<"The maximum sum is: " << " " << maximum << " at " << index+1 << "th index " << " ";




    return 0;
}

