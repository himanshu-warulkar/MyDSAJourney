#include <iostream>
using namespace std;

bool func(int n){
    if(n ==1) return true;
    if(n %2 !=0) return false;
    return func(n/2);
}

int main(){
    if(func(5)) cout << "True";
    else cout << "False";
    return 0;
}