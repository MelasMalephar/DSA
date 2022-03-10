/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int total = 0;
    ListNode Head(1);
    ListNode *t = &Head;
    while(total || l1 || l2) {
        total += (l1? l1->val : 0) + (l2? l2->val : 0);
        t->next = new ListNode(total%10);
        t = t->next;
        total /= 10;
        if(l1) l1 = l1->next;
        if(l2) l2 = l2->next;
    }
    return Head.next;
}};

