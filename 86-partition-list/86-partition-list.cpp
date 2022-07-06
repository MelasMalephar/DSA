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
    ListNode* partition(ListNode* head, int x) {
        ListNode *p=new ListNode;
        auto h1=p;
        ListNode *q=new ListNode;       
        auto h2=q;

        while(head){
            if(head->val<x){ p->next=head; p=p->next;}
            else {q->next=head; q=q->next; }
            head=head->next;
        }
        p->next=h2->next;
        q->next=nullptr;
        return h1->next;
    }
};