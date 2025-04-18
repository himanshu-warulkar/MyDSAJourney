// return point of intersection of two LL

//01 length of both LL
//02 temp intitalize at head,traverse temp of both on same level

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;

        int lenA = 0;
        int lenB = 0;

        while(tempA != NULL){
            lenA++;
            tempA = tempA->next;           
        }
        while(tempB != NULL){
            lenB++;
            tempB = tempB->next;           
        }

        if (lenA > lenB){
            int diff = lenA - lenB;
            for(int i=1; i<=diff; i++){
                tempA = tempA->next;
            }
            while(tempA != tempB){
                tempA = tempA->next;
                tempB = tempB->next;
            }
            return tempA;
        }
        else{
            int diff = lenB - lenA;
            for(int i=1; i<=diff; i++){
                tempB = tempB->next;
            }
            while(tempA != tempB){
                tempA = tempA->next;
                tempB = tempB->next;
            }
            return tempA;
        }
    }
};