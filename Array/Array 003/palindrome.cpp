#include <iostream>
using namespace std;

void palindrome (int a[], int n){
    bool flag = true;
        for(int i=0, j=n-1; i<n; i++, j--){
            if(a[i] != a[j]){
                flag = false;
                break;
            }
            
            
        }

        if(flag == true) cout <<"The given array is palindrome :D ";
        else cout <<"The given array is not a palindrom :( ";
    }

    
    





int main() {
    int n;
    cout << "Enter the length of array: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements in array: ";
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    palindrome (a, n);
    return 0;
}