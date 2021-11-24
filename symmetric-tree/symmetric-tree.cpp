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
    bool csym(TreeNode* p,TreeNode* q){
        if(p==nullptr || q==nullptr) return p==q;
        if(p->val == q->val) return (csym(p->right,q->left) && csym(p->left,q->right));
        else return false;
    }
    bool isSymmetric(TreeNode* root) {
       return csym(root->left,root->right);
    }
};