//Find the length of loop in cycle of LL
//length may be zero(no loop)

//solution
//fast and slow
//slow = head && fast = slow->next
// if slow != fast => no loop


class Solution{
public:
    ListNode *removeElements(ListNode *head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        bool flag = false;
        while(fast and fast->next){                 
            if(fast == slow) {
                flag = true;
                break;
            }
            fast = fast->next->next;
            slow = slow->next;

        }

        if(flag == 0) return 0;

        int cnt = 1;
        slow = slow->next;
        while(slow!=fast){
            cnt++;
            slow = slow->next;

        }
        return cnt;
    }
};
