#include <iostream>
#include <vector>
using namespace std;
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void preOrder(Node* root){
    if(root == NULL) return; //base
    cout << root->val << " "; //work
    preOrder(root->left); //call1
    preOrder(root->right); //call2
}

void inOrder(Node* root){
    if(root == NULL) return; //base
    inOrder(root->left); //call1
    cout << root->val << " "; //work
    inOrder(root->right); //call2
}

void postOrder(Node* root){
    if(root == NULL) return; //base
    postOrder(root->left); //call1
    postOrder(root->right); //call2
    cout << root->val << " "; //work
}

int main() {
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    cout << "The Preorder DFS for above tree is: ";
    preOrder(a);
    cout << endl;

    cout << "The Inorder DFS for above tree is: ";
    inOrder(a);
    cout << endl;

    cout << "The Postorder DFS for above tree is: ";
    postOrder(a);
    cout << endl;
}