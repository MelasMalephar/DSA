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
    void reorderList(ListNode* head) {
        vector<ListNode *> v;
        ListNode * p=head;
        ListNode *q= new ListNode(0);
        while(p){v.push_back(p); p=p->next;}
        int n=v.size()-1;
        for(int i=0;i<=n/2;i++)
        {   q->next=v[i];
            q=q->next;
            if(q==v[n-i]){ q->next=nullptr; break;}
            q->next=v[n-i];
            q=q->next;
        }
        if(q!=nullptr)q->next=nullptr;
        head=q->next;
    }
};