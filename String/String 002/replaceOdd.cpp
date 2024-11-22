//replace every odd char with a
#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cout <<"Please enter the string: " << endl;
    getline(cin, s);

    for(int i=0; s[i]!='\0'; i++){
        if(i%2 != 0){
            s[i] = '#';
        }
    }

    cout << "The modified string is: " << endl;
    cout << s;






    return 0;
}