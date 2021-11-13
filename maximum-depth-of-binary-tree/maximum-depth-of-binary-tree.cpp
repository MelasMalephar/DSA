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
    int dpt=0;
    void updpt(TreeNode* p , int i=1)
    { if(p == nullptr) return;
      dpt = max(dpt,i);
      updpt(p->left,i+1);
      updpt(p->right,i+1);
    }
    int maxDepth(TreeNode* root) {
        updpt(root);
        return dpt;
    }
};