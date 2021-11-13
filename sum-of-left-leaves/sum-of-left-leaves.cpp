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
    void calcsum(TreeNode* p,int val=0){
        if(p == nullptr) return ;
        if(p->left==nullptr && p->right==nullptr && val==1)sum+=p->val;
        calcsum(p->left,1);
        calcsum(p->right,0);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        calcsum(root);
        return sum;
    }
};