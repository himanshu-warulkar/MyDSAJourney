// flatten and return the DLL
//using recursion
class Solution{
public:
    vector<ListNode> splitNodes(ListNode* ){
     Node* temp = head;
     Node* a = temp->next;
     while(temp){
        if(temp->child != NULL){
            Node* c = temp->child;
            temp->child = NULL;
            c = flatten(c);
            temp->next = c;
            c->prev = temp;
            while(c->next){
                c = c->next;
            }
            c->next = a;
            if(a) a->prev = c;
        }
        temp = a;
     }  
     return head; 
}