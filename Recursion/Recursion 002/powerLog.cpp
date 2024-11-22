#include <iostream>
using namespace std;


int power(int x, int n){
    if(n==0) return x;
    if(n %2 == 0){
        power(x, n) = power(x, n/2)* power(x, n/2);
    }
    power(x, n) = power(x, n/2)* power(x, n/2) * x;
    
    return power(x, n);
}



int main(){
    cout << power(3, 2);
}