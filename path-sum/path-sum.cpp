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
    bool hasPathSum(TreeNode* root, int Sum) {
        if(root == nullptr) return false;
        if(root->val == Sum && root->left == nullptr && root->right == nullptr)  return true;
        return (hasPathSum(root->left,Sum-root->val) || hasPathSum(root->right,Sum-root->val));
    }
};