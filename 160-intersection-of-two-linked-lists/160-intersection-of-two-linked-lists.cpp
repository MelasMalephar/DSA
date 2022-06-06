/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        auto p=headA;
        auto q=headB;
        while(q!=p){
            if(q==nullptr)q=headA;
            else  q=q->next;
            if(p==nullptr)p=headB;
            else p=p->next;
        }
       return q; 
    }
};