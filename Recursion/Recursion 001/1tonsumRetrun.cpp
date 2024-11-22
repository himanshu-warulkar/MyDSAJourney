#include <iostream>
using namespace std;
int sum (int n){
    // base case is required
    if(n==0) return 0;
    int ans = n + sum(n-1);
    return ans;


}

int main(){
    cout << sum(5);
}