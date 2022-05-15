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
    void chkd(TreeNode * root, int &d,int i){
        if(!root) return ;
        d=max(d,i);
        chkd(root->left,d,i+1);
        chkd(root->right,d,i+1);
    }
    
     void trv(TreeNode * root, int& ans,int d){
        if(!root) return ;
        if(d==0) ans+=root->val;
        trv(root->left,ans,d-1);
        trv(root->right,ans,d-1);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        int d=0;
        chkd(root,d,0);
        int ans=0;
        trv(root,ans,d);
        return ans;
    }
};