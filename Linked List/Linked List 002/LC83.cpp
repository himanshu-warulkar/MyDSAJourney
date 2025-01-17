// Remove Duplicates from the sorted list

class Solution{
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* a = head;
        ListNode* b = head->next;
        while(b){
            while(a->val == b->val){
            a = a->next;
            b = b->next;
        }
        a->next = b;
        a = b;
        if(b) b = b->next;
        }
        return head;
        
    }
};