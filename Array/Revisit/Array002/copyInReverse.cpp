#include <iostream>
using namespace std;

int main() {
    int x, n;
    cout << "Enter the target: ";
    cin >> x;
    cout << "Enter the length of array: ";
    cin >> n;

    int a[n];
    cout << "Enter the elements in array: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    int b[n];
    for(int i=0; i<n; i++){
        int j = n - 1 - i;
        b[i] = a[j];
    }
    for(int i=0; i<n; i++){
        cout << b[i];
    }
}