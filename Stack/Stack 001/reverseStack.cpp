#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> st;
    stack<int> gt;
    stack<int> rt;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    //empty st into gt
    while(st.size() > 0){
        gt.push(st.top());
        st.pop();
    }

    while(gt.size() > 0){
        rt.push(st.top());
        gt.pop();
    }

    while(rt.size() > 0){
        st.push(st.top());
        rt.pop();
    }
    while(st.size() > 0){
        cout << st.top() << " ";
    }
}