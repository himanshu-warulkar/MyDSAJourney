// if LL have Cycle in it
class Solution {
public:
    ListNode *ifCyclePresent(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next;
            if(fast == slow) return true;
        }
        return false;





    }
};