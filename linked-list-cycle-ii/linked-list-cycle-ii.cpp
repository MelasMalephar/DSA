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
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr) return head;
        vector<ListNode *> v;
        v.push_back(head);
        ListNode *p=head->next;
        int cnt=0;
        while(p){
            v.push_back(p);
            auto i =find(v.begin(),v.end(),p->next);
            if(i!=v.end()) { return *i;}
            p=p->next;
        }
        return nullptr;
    }
};