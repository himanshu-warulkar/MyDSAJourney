#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string s;
    cout <<"Enter a String : "<< endl;
    getline(cin, s);
    int count=0;
    int answer=0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ) count++;
        else{
        answer += count*(count +1)/2;
        count = 0;
        }
    }
    answer += count*(count +1)/2;

    cout << "The substings with the vowels in given string is/are: "  << answer << endl;
    
}