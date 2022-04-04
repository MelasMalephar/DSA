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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head->next==NULL) return head;
        int n=getsz(head);
        ListNode *p=head,*q=head;
        int i=1;
        // cout<<n<<endl;
        ListNode *temp=head;
        while(head != NULL){
            if(i==k) p=head;
            if(i==n-k+1) q=head;
            head=head->next;
            i++;
        }
        swap(p->val,q->val);
        return temp;
    }
    int getsz(ListNode* head){
        int j=1;
        while(head){
            head=head->next;
            j++;
        }
        return --j;
    }
    
};