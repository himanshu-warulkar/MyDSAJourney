//Program to store roll number and marks obtained by 4 student side by side in a matrix
#include <iostream>
using namespace std;
int main(){
    int roll_no;
    cout<<"Enter the number of roll no: ";
    cin >> roll_no;

    int marks;
    cout <<"Enter the number of marks: ";
    cin >> marks;

    int arr[roll_no][marks];

    cout <<"Enter the data: ";
    for(int i=0; i<roll_no; i++){
        for(int j=0; j<marks; j++){
            cin >> arr[i][j];
        }
        
    }
    cout << endl;
    cout <<"Enter the student data is: " << endl ;
    for(int i=0; i<roll_no; i++){
        for(int j=0; j<marks; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

