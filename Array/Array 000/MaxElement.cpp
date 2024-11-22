#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in array: ";
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cout << "Enter the elements in array :" << i+1 << endl; 
        cin >> arr[i];
    }

    int max = arr[0];

    for(int i=0; i<n; i++){
        if(max < arr[i]) {
            max = arr[i];
        }
    }

    cout <<"The maximum element is : "<< max << endl;

    return 0;
}