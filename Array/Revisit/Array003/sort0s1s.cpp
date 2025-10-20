#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the length of array: ";
    cin >> n;

    int a[n];
    cout << "Enter the elements in array: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    

    int noz = 0;
    int noo = 0;

    //int n = sizeof(a)/sizeof(a[0]);
    

    for(int i=0; i<n; i++){
        if(a[i] == 0) noz++;
        if(a[i] == 1) noo++;
    }

    for(int i=0; i<n; i++){
        if(i<noz) a[i] = 0;
        else a[i] = 1;
    }

    cout << "The array is: ";
    for(int i=0; i<n; i++) cout << a[i];
    
}