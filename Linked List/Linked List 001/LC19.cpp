// remove nth node from last
// not the best method
class Solution{
public:
    NodeList* removeNthNodeFromEnd(NodeList* head, int n){
        int len = 0;
        ListNode* temp = head;
        while(temp!= NULL){
            len++;
            temp++;
        }
        if(n==len){
            head = head->next;
            return head;
        } 
        //nth from end = (len-n+1)th from start
        int m = len - n + 1;
        int idx = m - 1;
        for(int i=1; i<=idx; i++) temp = temp->next;
        temp->next = temp->next->next;
        return head;

    }
};

//using slow and fast pointers
class Solution{
public:
    NodeList* removeNthNodeFromEnd(NodeList* head, int n){
        NodeList* slow = head;
        NodeList* fast = head;
        //traverse fast to n+1 steps;
        for(int i=1; i<=n+1; i++){
            if(fast == NULL) return head->next;
            fast = fast->next;
        }
        while(fast!= NULL){
            slow = slow->next;
            fast = fast->next;
        }
        //now slow is at nth node from end
        slow->next = slow->next->next;
        return slow;
};