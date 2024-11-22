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

    bool sorted = true;

    for(int i=0; i<n; i++){
        if(a[i] <= a[i+1]){
            continue;
        } 
        else{
            sorted = false;
            break;
        }

    }

    if(sorted == true){
        cout <<"The array is sorted! :D";
    } 

    else cout <<"The array is not sorted :( " ;




    return 0;
}