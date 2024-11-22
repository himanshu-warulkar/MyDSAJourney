//Check if Anagram : frequency of characters is same.
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;


int main(){
    string s1;
    cout <<"Please Enter a First String: " <<  endl;
    getline(cin, s1);

    string s2;
    cout <<"Please Enter a Second String: " <<  endl;
    getline(cin, s2);

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());


    if(s1 == s2) {
        cout << "The entered strings are anagrams." << endl;
    } else {
        cout << "The entered strings are not anagrams." << endl;
    }              

    return 0;

}