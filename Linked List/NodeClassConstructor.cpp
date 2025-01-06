// final node class for Linked List
#include <iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this -> val = val;
        this -> next = NULL;
    }
};

int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    
    
    // forming LL (i.e Linking)

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;


    // updating the value 
    // value of b can be updated using pointer of a (i.e a.next)

    //a.next->val = 70;
    //cout << b.val<< endl;

    //fetching value of 'd' using 'a'
    //cout << (((a.next)->next)->next)->val;

    // Display all the values in the LL
    //method 1
    // iterate the LL using while till NULL
    Node temp = a;
    while(true){
        cout<<temp.val<< " ";
        if(temp.next == NULL) break;
        temp = *(temp.next);
    }

    //method 2 (in next file)
    //use only pointers


}