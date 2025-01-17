#include <iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class DoublyLinkedList{// user defined datastructure
public:
    Node* head; 
    Node* tail;
    int size;
    DoublyLinkedList(){
        head = tail = NULL; //No val or next of NULL
        size = 0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size == 0){
            head = tail = temp;
        }
        else{
            tail->next = temp;
            temp->prev = tail; //extra
            tail = temp;
        }
        size++;
    }

    void inserAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp -> next = head;
            head->prev = temp; //extra
            head = temp;
        }
        size++;
    }

    void insertAtIndex(int idx, int val){
        if(idx == 0){
            inserAtHead(val);
            return;
        } 
        else if(idx == size){
            insertAtTail(val);
            return;
        }
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=1; i<idx-1; i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            t->prev = temp; //extra
            t->next->prev = t; //extra
            size++;
        }
        
    }

    void display(){
        Node* temp = head;
        while(temp!= NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void deleteAtHead(){
        if(size == 0){
            cout << "List is Empty!" << endl;
            return;
        } 
        else if (size == 1) {
            head = tail = NULL;
            return;
        }
        else{
            head = head->next;
            if(head) head->prev = NULL;
            if(!head) tail = NULL;
            
            size--;
        }
    }


    void deleteAtIndex(int idx){
        if(idx<0 || idx>=size) cout <<"Invalid Index";
        else if(idx==0) deleteAtHead();
        else if(idx==size-1) deleteAtTail();
        else{
            Node* temp = head;
            for(int i=1; i<idx-1; i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            temp->next->prev = temp; //extra
            size--;
        }
    }

    void deleteAtTail(){ //better than Singly LL
        if(size == 0){
            cout << "List is Empty!" << endl;
            return;
        } 

        /*else if(size == 1) {
            deleteAtIndex();
            return;
        } */

        Node* temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        size--;
        
       
    }

};

void display(Node* head){
    while(head){
        cout << head->val<< " ";
        head = head->next;
    }
    cout << endl;
}

void displayRev(Node* tail) {
    while(tail) {
        cout << tail->val << " ";
        tail = tail->prev;
    }
    cout << endl;
}


int main(){
    DoublyLinkedList list; 
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);

    list.display();
    list.insertAtTail(40);
    list.display();

    list.inserAtHead(0);
    list.display();

    list.insertAtIndex(2,60);
    list.display();

    list.deleteAtTail();
    list.display();

    // 10 20 30 40 50
    /* Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a; */

    //display(a);
    //displayRev(e);
}