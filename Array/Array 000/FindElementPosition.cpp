#include <iostream>
using namespace std;

int main() {
    int n;
    int x;
    cout << "Enter the number of elements in array" << endl;
    cin >> n;
    cout << "Enter the elements to find in array" << endl;
    cin >> x;
    int arr[n];

    for(int i=0; i<n; i++){
        cout << "Enter the elements in array :" << i+1 << " :" <<endl;
        cin >> arr[i];
        if (x == i){
        cout <<"position is :" << i << endl;
    }
}


    return 0;
}