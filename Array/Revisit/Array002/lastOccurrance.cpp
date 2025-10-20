#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int idx = -1;
    int x = 9;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size; i++){
        if (arr[i]==x) idx = i;
    }
   /*for(int i=0; i<size-1; i--){
        if(arr[i] == x) {
            idx = i;
            break;
        } 
   }*/
    //cout << idx;
    cout << size;
}