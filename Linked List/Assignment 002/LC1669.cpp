//Merge in between two LL
class Solution{
public:
    ListNode *mergeTwoLL(ListNode *head){
        ListNode* curr = head;
        a--;
        while(a!=0){
            curr = curr->next;
        }
        
        b++;
        curr = list1;
        while(b!=0){
            curr = curr->next;
        }
        ListNode* temp = list2;

        while(temp->next){
            temp->next == curr;
        } 
        while(curr != b+1){
            prev->next = headA;
            temp->next = curr;
        }
    }
};