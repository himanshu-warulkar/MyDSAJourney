// merge 2 sorted list using merge sort
class Solution{
public:
    ListNode* mergeTwoSortedLinkedList(ListNode* head){
        ListNode* c = new ListNode(100);
        ListNode* temp = c;
        while(a && b){
            if(val->a <= val->b){
                temp->next = a;
                a = a-> next;
                temp = temp-> next;
            }
            else{
                temp->next = b;
                b = b->next;
                temp = temp->next;
            }
        }
        if(!a){
            temp->next = b;
        }
        else{
            temp->next = a;
        }
        return c->next;
    }
};