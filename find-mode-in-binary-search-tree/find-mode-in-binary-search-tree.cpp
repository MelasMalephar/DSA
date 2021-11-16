/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    unordered_map<int,int> s;
    
    void getalln(TreeNode *p){
        if(p == nullptr) return;
        s[p->val]++;
        getalln(p->left);
        getalln(p->right);
    }
    vector<int> findMode(TreeNode* root) {
        if(root->right ==nullptr && root->left==nullptr) return {root->val};
        getalln(root);
        vector<int> v;
        int max=INT_MIN;
        for(auto p:s) 
            max=std::max(max,p.second);
        for(auto d:s)
            if(d.second==max) v.push_back(d.first);
        return v;
            
    }
};