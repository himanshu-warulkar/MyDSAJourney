#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the length of array: ";
    cin >> n;
    int arr[n];
    cout << "Please Enter the elements in array: ";
     for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int x;
    cout << "Enter the target element from the array: ";
    cin >> x;


    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo <= hi){
        int mid = lo + (hi - lo)/2;
        if(arr[mid] == x){
            flag = true;
            cout << arr[mid + 1];
            break;
        }
        else if(arr[mid] < x) lo = mid+1;
        else hi = mid -1;
    }
    if(flag == false) cout << arr[lo];

    return 0;
}