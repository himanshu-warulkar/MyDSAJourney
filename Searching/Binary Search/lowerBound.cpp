#include <iostream>
using namespace std;

int main(){
    int arr[9] = {1,2,3,14,5,6,7,8,9};
    int n = 9;
    int x = 4;
    for(int i=0; i<n; i++){
        if(arr[i] > x){
            cout << arr[i-1];
            break;
        }
    }
}