//Find th forst non-repeating number in array.
#include <iostream>
#include <vector>
using namespace std;

void norepeat(vector<int>a, int n){
    bool flag = false;
    for(int i=0; i<n; i++){
        int j;

        for(j=0; j<n; j++){
            if(i!=j and a[i]==a[j]) break;
        }

        if(j==n){
            cout <<a[i]<<" is the first non-repeating element, ";
            flag = true;
            break;
        }


    }
    if(!flag) cout <<"There is no non-reparting in the array." << endl;

}







int main() {
    int n;
    cout << "Enter the length of array: ";
    cin >> n;
    vector<int>a(n);
    cout << "Enter the elements in array: ";
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    norepeat(a, n);
}