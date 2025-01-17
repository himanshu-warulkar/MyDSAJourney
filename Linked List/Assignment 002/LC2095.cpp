// Delete middle node and return head of updated LL
// given: head

//solution01
//delete & middle
//=> fast and slow return slow  "Now you know middle"
//=> prev at NULL curr at HEAD prev->next = curr->next

//=>only curr at head
//iterate curr till curr->next != slow
class Solution{
public:
    ListNode *deleteAndReturnModified(ListNode *head){
        ListNode* fast = head;
        ListNode* slow = head;
        if(!head or !head->next) return NULL;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* curr = head;
        while(curr->next != slow){
            curr = curr->next;
        }
        curr->next = cur->next->next;
        return head;
    }
};