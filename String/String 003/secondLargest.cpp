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
        int mod = stoi(s);
    }
    int max = -1;
    int smax =-1;
    for(int i=0; i<mod.length(); i++){
        if(mod[i] > max) mod[i] = max;
        if(mod[i] < max) mod[i] = smax;
    }


    return 0;
}
