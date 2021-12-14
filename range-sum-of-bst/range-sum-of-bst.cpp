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
    int sum=0;
    
    void calcsum(TreeNode* p,int l,int h){
        if(p==nullptr) return ;
        if(p->val>=l && p->val<=h) sum+=p->val;
        calcsum(p->left,l,h);
        calcsum(p->right,l,h);
    }
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        calcsum(root,low,high);
        return sum;
    }
};