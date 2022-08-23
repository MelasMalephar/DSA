class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head->next == nullptr)
            return true;

        auto * fast = head;
        auto * slow = head;
        
        auto * previous = static_cast<ListNode*>(nullptr);//list node NUll ptr
        auto * next_slow = slow->next;
        
        //dividing into two list  from n/2;
        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            next_slow = slow->next;
            slow->next = previous;  //creating list 1
            previous = slow;    
            slow = next_slow;
        }
        if (fast != nullptr && fast->next == nullptr)
            next_slow = next_slow->next; //list 2 ptr+1 if odd
            
        auto * forwarder = next_slow;
        auto * backwarder = previous;
        while (forwarder != nullptr && backwarder != nullptr) {
            if (forwarder->val != backwarder->val)
                return false;
            forwarder = forwarder->next;
            backwarder = backwarder->next;
        }
        return true;
    }
};