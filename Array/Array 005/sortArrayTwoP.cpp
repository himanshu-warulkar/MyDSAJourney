//sort the array of zeros and ones
#include <iostream>
#include <vector>
using namespace std;

void sort2(vector<int>& v){
    int n =v.size();
    int i=0;
    int j=n-1;
    while(i < j){ 
        if(v[i]==0) i++;
        if(v[j]==1) j--;
        if(i>j) break;
        if(v[i]==1 and v[j]==0){
                v[i]=0;
                v[j]=1;
                i++;
                j--;
        }
    }
}


int main(){
    int n;
    cout << "Enter the length of array: ";
    cin >> n;
    vector<int>v(n);
    cout << "Enter the elements in array: ";
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    sort2(v);
    cout << "The sorted array is: ";
    for(int i=0; i < v.size(); i++){
        cout << v[i] << " " ;
    }

    cout << endl; 
    return 0;
}