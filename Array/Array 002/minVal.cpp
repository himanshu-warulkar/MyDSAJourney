#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

/*int minimum(int a, int b){
    if(a >b) cout <<b<< "is minimum ";
    else cout <<a << "is minimum "; 
} */

int main(){
    int n;
    cout << "Enter the length of array: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements in array: ";

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int mini = INT_MAX;

    for(int i=0; i<n; i++){
        mini = min(a[i], mini);
    }
         
    
        
    cout << "The minimum element is : " << mini ;
}