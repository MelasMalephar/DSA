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
    int getDecimalValue(ListNode* head) {
        vector<int> v;
        while(head){v.push_back(head->val); head=head->next; }
        int n=v.size()-1,sum=0;
        for(int i=0;i<=n;i++)
            sum+=pow(2,(n-i))*v[i];
    return sum;
    }
};