//count the number of triplets whose sum is equal to the 
//given value of x
#include <iostream>
using namespace std;

void triplet(int a[], int n, int x){
    int count = 0;
    for(int i=0; i<n; i++){ 
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(a[i] + a[j] + a[k] == x){
                    count++;
                }
            }
        }
    }

    cout <<"The number of tripets, having the sum of given number x is/are: " << count;

}





int main() {
    int n;
    cout << "Enter the length of array: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements in array: ";
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int x;
    cout << "Please enter the target element: ";
    cin >> x;

    triplet (a, n, x);
    return 0;
}