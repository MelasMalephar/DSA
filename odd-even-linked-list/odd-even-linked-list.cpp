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
    ListNode* oddEvenList(ListNode* head) {
         if(head==NULL)return NULL;
        ListNode* odd=head;
        ListNode*even=head->next;
        while(even!=NULL&&even->next!=NULL){
            ListNode*hello=odd->next;
             odd->next=even->next;
            ListNode*temp=even->next->next;
            even->next->next=hello;
            even->next=temp;
            odd=odd->next;
            even=even->next;
        }
        return head;
    }
};