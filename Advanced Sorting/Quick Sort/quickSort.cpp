#include <iostream>
using namespace std;

int partition(int arr[], int si, int ei){
    int pe = arr[si];
    int count = 0;
    for(int i=si+1; i<=ei; i++){
        if(arr[i] <= pe) count++;
    }
    int pi = count + si;
    swap(arr[si], arr[pi]);

    int i = si;
    int j = ei;
    while(i<pi && j>pi){
        if(arr[i] < pe) i++;
        if(arr[j] > pe) j++;
        else if(arr[i]>pe && arr[j]<= pe) {
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
    }
    return pi;
}


void quicksort(int arr[], int si, int ei){
    if(si >= ei) return;
    int pi = partition(arr, si, ei);
    quicksort(arr, si, pi-1);
    quicksort(arr, pi+1, ei);
}

int main(){
    int arr[] = {5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<8; i++){
        cout <<arr[i]<<" ";
    }
    quicksort(arr, 0, n-1);
    for(int i=0; i<8; i++){
        cout <<arr[i]<<" ";
    }
}