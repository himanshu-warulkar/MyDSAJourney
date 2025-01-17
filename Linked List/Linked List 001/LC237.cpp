// delete a node in LL but, you are not provided with head node, 
//only target node is given.

//01 tar->val = tar->next->val;
//02 tar->next = tar->next->next;

class Solution {
public:
    void deleteNode(ListNode* node){
        target->val = target->next->val;
        target->next = target->next->next;
    }
}