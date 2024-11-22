#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout << "Please Enter the length of array: ";
    cin >> n;
    int arr[n];

    cout << "Please enter the elements in the array: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++){
        bool flag = true;
        for (int j = 0; j < n - 1 - i; j++){
            if(arr[j] < arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                flag = false;
            }
        }
        if(flag) break;
    }

    cout << "The sorted array is: " << endl;
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
