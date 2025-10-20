#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    int x;
    cout <<"Enter the target element: ";
    cin >> x;
    bool flag = false;
    for(int i=0; i<=n-1; i++){
        if (arr[i]==x) flag = true;
    }
    if(flag) cout << "present";
    else cout<< "Absent";
    cout << " ";

    int max = arr[0];
    for(int i=0; i<n; i++){
        if(max < arr[i]) max = arr[i];
    }
    cout << "The maximum is: " << max;
}