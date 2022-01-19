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
        ListNode*slow=head,*fast=head;
        int flag=0;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                flag=1;
                break;
            }
        }
        ListNode* no=new ListNode(-1);
        if(!flag)
            return NULL;
        slow=head;
        while(slow){
            if(slow==fast)
                return slow;
            slow=slow->next;
            fast=fast->next;
            
        }
        return NULL;
    }
};