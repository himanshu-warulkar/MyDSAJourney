#include <iostream>
#include <climits>
using namespace std;



int secondLargest(int a[], int n){
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int n;
    cout << "Enter the number of elements in array: ";
    cin >> n;
    int arr[n];

    for(int i=0; i<=n-1; i++){
        if(arr[i] > max1) {
            max1 = max2;
            max1 = arr[i];
        }
        else if(max2 < a[i] and a[i] != max1) max2 = a[i];
        

    }
    return max2;

}

int main() {
    

    for(int i=0; i<=n-1; i++){
        cout << "Enter the elements in array :" << i+1 << endl; 
        cin >> arr[i];
    }

    
    int secondMax =secondLargest(arr, n);
    if(secondMax == INT_MIN) cout << "no second largest element. ";
    else cout << "The second largest number is: " <<secondLargest << endl;


    return 0;
}