//sort the array of zeros and ones
#include <iostream>
#include <vector>
using namespace std;

void sort01(vector<int>& v){
    int n = v.size();
    int noz=0;
    int noo=0;

    for(int i=0; i<n; i++){
        else if(v[i]==0) noz++;
        else noo++;
    }

    for(int i=0; i<n; i++){
        if(i<noz) v[i]=0;
        else v[i]=1;
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

    sort01(v);
    cout << "The sorted array is: "
    for(int i=0; i<n; i++){
        cout << v[i] << " " ;
    }

    cout << endl; 
    return 0;
}