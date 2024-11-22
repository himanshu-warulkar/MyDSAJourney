#include <iostream>
using namespace std;

void func(int a, int b, int &sum){
    
    if(a >= b) return;

    if(a%2 != 0){
        sum += a;
        func(a+2, b, sum);
    }else{
        func(a+1, b, sum);
    }
    
}

int main(){
    int sum = 0;
    func(3, 9, sum);
    cout << sum << endl;
}