// print middle row and middle column 

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
    cout << endl;
    cout << "The Middle row and column elements are: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(i == n/2 or j == n/2){
                cout << arr[i][j] << " ";
            }
            else  cout << " ";
            
        }
        cout << endl;

    }
}