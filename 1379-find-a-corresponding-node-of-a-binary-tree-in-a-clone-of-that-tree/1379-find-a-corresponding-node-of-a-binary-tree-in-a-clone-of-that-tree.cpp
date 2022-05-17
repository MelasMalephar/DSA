/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(!original || !cloned) return nullptr;
        if(original->val == target->val) return cloned;
        auto p=getTargetCopy(original->left,cloned->left,target);
        auto q=getTargetCopy(original->right,cloned->right,target);
        if(p==nullptr) return q;
        if(q==nullptr) return p;
        return nullptr;
    }
};