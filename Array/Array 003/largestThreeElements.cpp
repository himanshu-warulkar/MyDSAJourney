#include <iostream>
#include <climits>
using namespace std;

void greatest(int a[], int n){
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;

    for(int i=0; i<n; i++){
        if(a[i] > max1){
            max1 = a[i];
            max3 = max2;
            max2 = max1;
        }
        else if(a[i] > max2) {
            max2 = max1;
            max2 = a[i];
        }
        else if(a[i] > max3) {
            max3 = a[i];
        }

        if(max1 == INT_MIN){
            cout << "There is no maximum number: " << max1;
        }
        else cout << max1 << " " ;   

        if(max2 == INT_MIN){
            cout << "There is no maximum number: " << max2;
        }
        else cout << max2 << " "; 

        if(max3 == INT_MIN){
            cout << "There is no maximum number: " << max3;
        }
        else cout << max3 << " ";    
    }

    
    
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

    greatest(a, n);


 return 0;
}

