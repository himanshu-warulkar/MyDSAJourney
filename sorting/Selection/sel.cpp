#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cout <<"Please Enter the length of array: ";
    cin >> n;
    int arr[n];

    cout << "Please enter the elements in the array : " << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n-1; i++){
        int min = INT_MIN;
        int mindx = -1;
        for(int j=0; j<n-1; j++){
            if(arr[j] < min){
                min = arr[j];
                mindx = j;
            }
        }
        swap (arr[i], arr[mindx]);
    }

    cout << "The sorted array is: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}