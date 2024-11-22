#include <iostream>
using namespace std;

int productOfArray(int a[], int n){
    int prod = 1;
    for(int i=0; i<n; i++){
        prod *= a[i];
    }

    return prod;
}

int main(){
    int n;
    cout << "Enter the length of array: ";
    cin >> n;
    
    int a[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    cout << productOfArray(a, n);

}