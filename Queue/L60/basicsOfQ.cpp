#include <iostream>
#include <queue>
using namespace std;

int main(){
    //create a queue
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout <<"size is: "<<q.size() << endl;
    q.pop();
    cout <<"size is: "<<q.size() << endl;

    cout << "Element in front is: " << q.front() << endl;

}