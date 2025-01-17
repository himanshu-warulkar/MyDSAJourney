#include <iostream>
using namespace std;

int main(){
    int n;
    cout <<"Please Enter the length of array: ";
    cin >> n;
    int arr[n];

    cout << "Please enter the elements in the array : " << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    bool flag = true;

    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]) flag = false;
    }

    if(flag == false){
        cout << "The array is not sorted !";
    }
    else{
        cout <<"The array is sorted, YaY!" ;
    }


}