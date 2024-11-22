#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in array: ";
    cin >> n;
    int arr[n];

    for(int i=0; i<=n-1; i++){
        cout << "Enter the elements in array :" << i+1 << endl; 
        cin >> arr[i];
    }

    int max = arr[0];
    int smax = -1;

    for(int i=0; i<=n-1; i++){
        if(max < arr[i]) {
            max = arr[i];
        }
    }



    for(int i=0; i<=n-1; i++){
        if(smax < arr[i] && arr[i] != max) {
            smax = arr[i];
        }
    }

    cout <<"The Second Max element is :" << smax;

    return 0;

}


