//input a string, concatenate with reverse string and print it.
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string s;
    cout <<"Please Enter a valid String: " <<  endl;
    getline(cin, s);
    string t = s;
    reverse(t.begin(), t.end());
    cout << "The modified string is: " << s+t << endl;
}