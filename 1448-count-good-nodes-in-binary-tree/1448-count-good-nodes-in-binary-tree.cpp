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
    int ans=0;
    
    void dfs(TreeNode *p,int mx){
        if(!p) return ;
        if(p->val>=mx){ ans++; mx=p->val;}
        dfs(p->left,mx);
        dfs(p->right,mx);
    }
    
    int goodNodes(TreeNode* root) {
        if(!root) return 0;
        dfs(root,root->val);  
        return ans;
    }
};