#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in array" << endl;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cout << "Enter the elements in array :" << i+1 << " :" <<endl;
        cin >> arr[i];
    }

    int sum = 0;

    for(int i=0; i<n; i++){
        
        sum += arr[i];
    }

    cout << "The sum of elements is : " << sum << endl;

    return 0;
}