//Find the difference between the sum of elements at even indices
// to the sum of elements at odd indices

#include <iostream>
using namespace std;

int custom(int a[], int n){

    int even = 0;
    int odd = 0;
    

    for(int i=0; i<n; i++){
        if(a[i] % 2 == 0){
            even = a[i] + 10;
        }
        else odd = a[i] * 2;
        
    }

    
    return a[n];

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

    cout << "The updated array is :" << custom(a, n);
    

    return 0;
}