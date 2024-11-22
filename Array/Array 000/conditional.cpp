//Question: Given array of marks of student if the marks of any student is less than 35 print its roll no. (index of array).
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: " <<endl;
    cin >> n;
    int arr[n];

    for ( int i=0; i <n; i++ ){
        cout << "Enter the marks of students: "<< i+1 << ": ";
        cin >> arr[i];
    }

    for (int i=0; i <n; i++){
        if (arr[i] < 35){
            cout << i << endl;
        }
    }

    return 0; 
}