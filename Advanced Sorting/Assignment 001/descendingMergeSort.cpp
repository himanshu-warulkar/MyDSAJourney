#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> a, int low, int mid, int high){
    vector<int>b;

    int i = low;
    int j = mid+1;

    while(i<=mid && j<=high){
        if(a[i] > a[j]) b.push_back(a[i++]);
        else b.push_back(a[j++]);
    }
    while(i<=mid) b.push_back(a[i++]);
    while(j<=high) b.push_back(a[j++]);

}

void mergeSort(vector<int>&a, int low, int high){
    if(low == high) return;
    int mid = (low+high)/2;
    mergeSort(a, low, mid);
    mergeSort(a, mid+1, high);

    merge(a, low, mid, high);
}

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    mergeSort(a, 0, n-1);
    for(auto x:a) cout<<x<<" ";
}