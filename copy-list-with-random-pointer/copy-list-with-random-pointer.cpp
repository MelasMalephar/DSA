/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    int getpos(Node* head , Node* random){
        int i=0;
        if(random==nullptr) return -1;
        while(head){
            if(head==random) return i;
            i++;
            head=head->next;
        }
        return -1;
    }
    
    Node* copyRandomList(Node* head) {
        Node dummyhead(0);
        vector<Node *> v;
        vector<int> n;
        Node * p=&dummyhead,*t=head;
        while(head){
            Node * temp= new Node(head->val);
            v.push_back(temp);
            n.push_back(getpos(t,head->random));
            p->next=temp;
            p=p->next;
            head=head->next;
        }
        p=dummyhead.next;
        int i=0;
        while(p){
            if(n[i]==-1)p->random=nullptr;
            else{
                p->random=v[n[i]];
            }
            i++;
            p=p->next;
        }
        return dummyhead.next;
    }
};