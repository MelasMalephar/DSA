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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<ListNode*>v;
        while(head){
            v.push_back(head);
            head=head->next;
        }
        reverse(v.begin()+left-1,v.begin()+right);
        ListNode dh(0);
        ListNode *p=&dh;
        for(auto c:v){
            p->next=c;
            p=p->next;
        }
        p->next=nullptr;
        return dh.next;
    }
};