#include <iostream>
#include <stack>
using namespace std;

void rdupli(string &s) {
    stack<char> st;
    
    // Remove consecutive duplicates using stack
    for (int i = 0; i < s.length(); i++) {
        if (st.empty() || st.top() != s[i]) {
            st.push(s[i]);
        }
    }
    
    // Create a reversed string from the stack
    string result = "";
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }
    
    // Set the input string to the result
    s = result;
}

int main() {
    string s = "aaabbcddaabfffg";
    cout <<"Original String: " << s << endl;
    rdupli(s);
    cout << "Processed string: " << s << endl;
    return 0;
}
