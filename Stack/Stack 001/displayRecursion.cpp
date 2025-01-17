#include <iostream>
#include <stack>
using namespace std;

    stack<int> st;
    stack<int> temp;

int main(){
    st.push(100);
    st.push(200);
    st.push(300);
    st.push(400);

    while(st.size() > 0){
        int x = st.top();
        temp.push(x);
        st.pop();
    }
    cout << "Enter the element to be added at the bottommost position: "<< endl;
    int y;
    cin >> y;
    st.push(y);

    while(temp.size() > 0){
        int z = temp.top();
        st.push(z);
        temp.pop();
    }

    cout << "The updated stack is: "<< endl;

    while(st.size() > 0){
        cout << st.top() << endl;
        st.pop();
    }

}

