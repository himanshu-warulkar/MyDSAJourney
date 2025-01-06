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
// display function working iteratively
void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp-> val << " ";
        temp = temp->next;
    }
}
// display function working reccursively 
void displayReccursively(Node* head){
    if(head == NULL) return; //basecase
    cout << head->val << " "; // kaam
    displayReccursively(head -> next); //call
}

// display in reverse order using recursion
void displayRev(Node* head){
    if(head == NULL) return; //basecase
    displayReccursively(head -> next); //call
    cout << head->val << " "; // kaam
}
int sizeOfLL(Node* head){
    Node* temp = head;
    int n = 0;
    while(temp != NULL){
        temp = temp->next;
        n++;
    }
return n;
//cout << "The size of Linked List is: " << n;

}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->next = b;
    b->next = c;
    c->next = d;

    // display all the values in the LL
    // you can display as follows: but also,
    // you can always create a function display with exact same content.
    Node* temp = a;
    while(temp != NULL){
        cout << temp-> val << " ";
        temp = temp->next;
    }
    cout << endl;

    // print using display() function:
    display(a);

    cout << endl;

    // display a particular (d) node value from LL:
    cout << a->next->next->next->val;

    //Display size of LL
    sizeOfLL(a);
}