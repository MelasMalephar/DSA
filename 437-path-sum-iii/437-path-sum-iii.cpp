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
    int sum;
    int pathSum(TreeNode* root, int T) {
        if(!root) return 0;
        getsum(root,T,0);
        pathSum(root->left,T);
        pathSum(root->right,T);
        return sum;
    }
    void getsum(TreeNode* p,int n,int s){
        if(!p) return;
        s+=p->val;
        if(s==n) sum++;
        getsum(p->left,n,s);
        getsum(p->right,n,s);
    }
};