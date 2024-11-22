#include <iostream>
using namespace std;

void func(int n, int i){
    if(i > n) return;
     cout << i << endl;
    func(n, i+1);
    cout << i << endl;

   
}

int main(){
    func(4, 1);
}