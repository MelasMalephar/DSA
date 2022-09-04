/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void mkvtr(Node* p,vector<int> &ans){
        if(p==nullptr) return ;
        ans.push_back(p->val);
        for(auto c:p->children){
            mkvtr(c,ans);
        }
    }
    
    vector<int> preorder(Node* root) {
        vector<int> ans;
        mkvtr(root,ans);
        return ans;
    }
};