#include <iostream>
#include <vector>
using namespace std;

void display(vector <int>& a){
        for(int i=0; i< a.size(); i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }


void reversePart(int i, int j, vector<int>& v){
    while(i<=j){
        int temp =v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return;
}


int main(){
    /*vector<int> v;
    int n;
    cout<<"Enter the size of array: " ;
    cin >> n;

    for(int i=0; i <= n-1; i++){
        cout<<"Enter the elements:  ";
        int q;
        cin >> q;
        v.push_back(q);
        cout << v[i] << endl;
        
    }*/
    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1); 
    cout << "Array Before Rotation: ";
    display(v);
    int n= v.size();
    int k;
    cout << "Enter the value of k: ";
    cin >> k;
    //rotate
    reversePart(0,n-k-1,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);
    cout << "Array After Rotation: ";
    display(v);
}