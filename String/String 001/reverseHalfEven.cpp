//input an even length of string and reverse the first half of the string.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cout << "Please Enter a String With Even Number of Characters: ";
    getline(cin,s);
    if(s.length()%2 != 0){
        cout << "Invalid Input";
    }
    else{
        int i = s.length()/2;
        reverse(s.begin(), s.begin()+i);
        cout <<"Modified string is: " << s << endl;
    }












    return 0;
}