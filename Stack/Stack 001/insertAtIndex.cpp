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

    cout <<"Enter the index number at which you gotta add the element in the stack: " << endl;
    int y;
    cin >> y;

    while(st.size() > y - 1){
        int x = st.top();
        temp.push(x);
        st.pop();
    }
    cout << "Enter the element to be added at the given position: "<< endl;
    int f;
    cin >> f;
    st.push(f);

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

