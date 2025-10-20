#include <iostream>
using namespace std;

void swap(int *a, int i, int j){

}

int main() {
    int n;
    cout << "Enter the length of array: ";
    cin >> n;

    int a[n];
    cout << "Enter the elements in array: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    

    int i = 0;
    int j = n-1;

    while(i<j){
        if(a[i] == 0) i++;
        if(a[j] == 1) j--;
        if(i > j) break;
        if(a[j] == 0 && a[i] == 1){
            a[i] = 0;
            a[j] = 1;
            i++;
            j--;
        }

    }

    cout << "The array is: ";
    for(int i=0; i<n; i++) cout << a[i];
    
}