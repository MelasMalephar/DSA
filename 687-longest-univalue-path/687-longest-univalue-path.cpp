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
    int src(TreeNode *p,int prev){
        if(p==nullptr) return 0;
        int a=src(p->left,p->val);
        int b=src(p->right,p->val);
        ans=max(ans,a+b);
        if(p->val==prev) return 1+max(a,b);
        return 0;
    }
    int longestUnivaluePath(TreeNode* root) {
        if(!root) return ans;
        ans=max(ans,src(root->left,root->val)+src(root->right,root->val));
        return ans;
    }
};