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

    bool flag = false;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i] == a[j]){
                cout << "The Duplicate element found: "<< a[i] << endl;
                flag = true;
                break;
            }
        }
    }

    if(flag == false){
        cout <<"No Duplicates Found! ";
    }
}
