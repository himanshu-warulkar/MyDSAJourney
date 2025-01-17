// Rotate the LL 
// Rotation in array: last ke 'k' elements kar aage rakh do.
class Solution{
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int n = 0;
        ListNode* temp = head;
        ListNode* tail = NULL;
        while(temp){
            if(temp->next == NULL) tail = temp;
            n++;
            temp = temp->next;
        }
        if(n==1 or n==0) return head;
        k = k%n;
        if(k==0) return head;
        //now place temp at n-kth position
        temp = head;
        for(int i=1; i<n-k; i++){
            temp = temp->next;
        }

        tail->next = head;
        head = temp->next;
        temp->next = NULL;
    
    }
};