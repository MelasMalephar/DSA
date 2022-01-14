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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return head;
        int n=calsize(head);
        k=k%n;
        if(k==0) 
            return head;
        auto p=head;
        for(int i=1;i<n-k;i++){
            p=p->next;
        }
        ListNode* newhead=p->next;
        p->next=nullptr;
        p=newhead;
        auto q=p;
        while(p){q=p; p=p->next;}
        q->next=head;
        return newhead;
    }
    
    
    int calsize(ListNode *p){
        int i=0;
        while(p){ i++; p=p->next;}
        return i;
    }
};