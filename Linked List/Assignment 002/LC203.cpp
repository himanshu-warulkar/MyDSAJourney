// remove LL element
class Solution{
public:
    ListNode *removeElements(ListNode *head, int val){
        ListNode* curr = head;
        while(curr and curr->next == val){
            curr = curr->next;
        }
        head = curr;
        while(curr){
            if(curr -> next && curr->next == val){
                curr->next = curr->next->next;
            }
            else{
                curr = curr->next;
            }
        }
        return head;
    }
};
