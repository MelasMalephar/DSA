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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode *tp=head;  
    stack<ListNode*> s,t;
    while(head){s.push(head); head=head->next;}
    if(n==1){ if(s.size()==1) return NULL;
        s.pop(); s.top()->next=NULL;}
    else if(n==s.size()){ return tp->next;}
    else {
        for(int i=1;i<n;i++){ t.push(s.top());    s.pop();}
        s.pop();
        auto k=s.top();
        k->next=t.top();}
    return tp;
  }
};