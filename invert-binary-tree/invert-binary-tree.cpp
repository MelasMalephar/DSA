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
    void invertt(TreeNode* p){
         if (p) {
        invertt(p->left);
        invertt(p->right);
        swap(p->left, p->right);
    }}
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* p=root; 
        invertt(p);
        return root;
    }
};