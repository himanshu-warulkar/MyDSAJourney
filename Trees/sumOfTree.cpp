#include <iostream>
using namespace std;

/*Left subtree and Right subtree

    1
    / \
    2   3   
    / \  / \
    4  5 6  7

    LST = 2 + 4 + 5 = 11
    RST = 3 + 6 + 7 = 16
    LST + RST = 11 + 16 = 27
    sum = root->val + LST + RST
    sum = 1 + 11 + 16 = 28

*/

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
    

    int sum(Node* root){
        if(root == NULL) return 0;
       return root->val +sum(root->left) + sum(root->right);
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
        cout << "Sum of all nodes in the tree: " << sum(a) << endl;
        return 0;
    }