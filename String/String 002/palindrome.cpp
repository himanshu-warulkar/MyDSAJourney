//check if the given string is palindrome or not
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cout << "Please Enter the String: " << endl;
    getline(cin, s);
    string rev = s;
    reverse(s.begin(), s.end());

    if(rev == s){
        cout << "The given string is a palindrome. ";
    }
    else cout << "The given string is not a palindrome. ";

    /*for(int i=0; s[i] != '\0'; i++){
        for(int s[j]= '\0'; j==0; j--){
            while(i != j){
                if(i == j){
                    flag = true;
                }
            }
        }
    } */

    






    return 0;

}