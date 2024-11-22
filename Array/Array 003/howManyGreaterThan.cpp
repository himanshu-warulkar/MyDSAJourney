//count the number of elements strictly greater than x

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the length of array: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements in array: ";

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int t;
    cout <<"Enter the target element: ";
    cin >> t;

    int count;
    count = 0;

    for(int i=0; i<n; i++){
        if(a[i] > t){
            count = count + 1;
        }
    }

    cout << "The number of elements greater than target element  is/are: " << count << endl;

    return 0;
}