// remove kth element from the stack
#include <stack>
#include <iostream>
using namespace std;
void removeKthElement(int k, stack<int>&s){
    stack<int> temp;
    k--;
    while(k--){
        temp.push(s.top());
        s.pop();

    }

    s.pop();

    while(!temp.empty()){
        s.push(temp.top());
        temp.pop();
    }
}

int main(){
    stack<int>s;
    for(int i=0; i<10; i++){
        s.push(i);
    }
    removeKthElement(4, s);

    while(!s.empty()){
        cout << s.top();
        s.pop();
    }
}
