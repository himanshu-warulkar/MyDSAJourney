#include <iostream>
using namespace std;

Class Node{
public:
    int val;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void display(Node* head){
    while(head != NULL){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

void deleteNode(int tar){
public:
    Node* temp = head;
    while(temp->next != tar){
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;

}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    Node* head = a;


    display();

}