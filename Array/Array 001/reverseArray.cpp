//write a program to copy the contents of array into another in the reverse order.
#include <iostream>
#include <vector>
using namespace std;
void display(vector <int>& a){
        for(int i=0; i< a.size(); i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }

int main(){
    vector<int> v;
    int n;
    cout<<"Enter the size of array: " ;
    cin >> n;

    

    for(int i=0; i <= n-1; i++){
        cout<<"Enter the elements:  ";
        int q;
        cin >> q;
        v.push_back(q);
        cout << v[i] << endl;
        
    }
    
    

    vector<int> v2(n);
    for(int i=0; i <= v.size(); i++){
        // i + j = size-1
        int j=v.size() -1 - i;
        v2[i] = v[j];  
    }
    
    display(v2);





    return 0;
}