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
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head -> next == NULL){
            return head;
        }
        vector<int> v;
        auto p=head;
        while(p){ v.push_back(p->val); p=p->next;}
        sort(v.begin(),v.end());
        p=head;
        for(int itr = 0; itr < v.size(); itr++){
            p -> val = v[itr];
            p = p -> next;
        }
        return head;
            
    }
};