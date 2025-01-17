// Detect Node where cycle begins.
// if LL have Cycle in it
class Solution {
public:
    ListNode *ifCyclePresent(ListNode *head) {
        //CheckIfCyclePresent
        ListNode* slow = head;
        ListNode* fast = head;
        bool flag = false // no cycle
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next;
            if(fast == slow) {
                flag = true;
                break;
            }
            if (flag = false){
                return NULL;
            }
            else{
                ListNode* temp = head;
                while(temp!= slow){
                    slow = slow->next;
                    temp = temp->next;
                }
                return slow;
            }


            
        }
        





    }
};