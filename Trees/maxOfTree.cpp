#include <iostream>
#include <limits.h>
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
    
    void display(Node* root){
        if(root == NULL) return;
        cout << root->val << " ";
        display(root->left);
        display(root->right);
    }
    
    int maxOfTree(Node* root){
        if(root == NULL) return INT_MIN; // Return minimum integer value if tree is empty
        int leftMax = maxOfTree (root->left);
        int rightMax = maxOfTree (root->right);
        return max(root->val, max(leftMax, rightMax));
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
    
        display(a);
        cout << endl;
        
        maxOfTree(a);
        cout << endl;
        cout << "Max of the tree is: " << maxOfTree(a) << endl;
        return 0;
    }