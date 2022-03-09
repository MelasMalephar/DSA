class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
        if(head == NULL)
            return NULL;
        if(head->next==NULL)
            return head;
        unordered_set<int> s;
        ListNode* p,*q;
        q = head;
        p = head->next;
        while(p!=NULL)
        {
            if(p->val == q->val)
             { s.insert(p->val);
                p=p->next;
               }
            else
            { q->next=p;
              q=p;
              p=p->next;  
            }
        }
        q->next= NULL;
      p=head;
      q=p->next;
      while(q!=NULL)
      { 
          if(s.find( q->val) != s.end())
          { q=q->next;}
        else
        { p->next=q;
          q=q->next;
         p=p->next;
        }
      }
      p->next=NULL;  
      return s.find(head->val)== s.end()?head:head->next;
    }
};