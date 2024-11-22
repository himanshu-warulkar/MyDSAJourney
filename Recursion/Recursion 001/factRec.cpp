#include <iostream>
using namespace std;
int fact (int n){
    // base case is required
    if(n==1) return 1;
    int ans = n * fact(n-1);
    return ans;


}

int main(){
    cout << fact(5);
}