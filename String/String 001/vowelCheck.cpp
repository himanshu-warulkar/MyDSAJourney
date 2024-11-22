//take input and tell how many vowels are there.
#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cout << "Please enter the string: \n";
    getline(cin,s);
    int count = 0;

    for(int i=0; s[i]!='\0'; i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') {
            count ++;
        }
    }

    cout << "The number of vowels in " << s << "is/are : " << count;








    return 0;
}