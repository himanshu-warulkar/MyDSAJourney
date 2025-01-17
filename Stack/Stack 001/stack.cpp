#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> st;
    stack<int> temp;
    cout << st.size() << " ";
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    int n = st.size();
    while(st.size() > 0){
        cout << st.top() <<" ";
        int x = st.top();
        st.pop();
        temp.push(x);

        while(temp.size() > 0){4
            temp.pop();
            st.push(temp.pop());
        }
    }
}