// where to use? -> 1 to n -> O(n)
// how many number of swaps in cyclic sort -> n-1
#include <iostream>
using namespace std;

int main(){
    int arr[] = {4,1,6,2,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int i = 0;
    while(i<n){
        int cidx = arr[i] - 1;
        if(i == cidx) i++;
        else swap(arr[i], arr[cidx]);
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}