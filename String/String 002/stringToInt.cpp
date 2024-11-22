//input string of length less than 10, convert into integer and display. 
#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <sstream>
using namespace std;

int main(){
    string s;
    cout << "Please Enter String, length must be less than 10: "<< endl;
    getline(cin, s);
    if(s.length() >= 10) cout << "Please enter valid string! ";
    else{
        cout << stoi(s);
    }


    return 0;
}
