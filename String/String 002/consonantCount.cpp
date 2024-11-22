//count the number of consonants in the string

#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cout << "Please Enter the String: "<< endl;
    getline(cin, s);
    int count = 0;

    for(int i=0; s[i] != '\0'; i++){
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u'){
            count++;
        }
    }

    cout << "The number of consonants in the string "<< s << " is/are: " << count;
}