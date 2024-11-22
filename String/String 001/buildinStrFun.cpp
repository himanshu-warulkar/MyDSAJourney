#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    //length
    string str ="himanshu ganesh warulkar";
    cout << str.size();
    cout << str.length();
    cout << endl;

    //push back
    cout << "Push back" << endl;
    cout << str << endl;
    str.push_back('e');
    cout << str << endl;

    //popback
    cout << "pop back" << endl;
    cout << str << endl;
    str.pop_back();
    cout << str << endl;

    string s1 = "sring1";
    string s2 = "sring2";

    string sum = s1 +s2;
    cout << sum;

    //reverse
    cout << endl;
    cout << "reverse" << endl;
    cout << str << endl;
    reverse(str.begin(), str.end());
    cout << str << endl;





}