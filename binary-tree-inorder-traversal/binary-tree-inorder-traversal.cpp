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
    vector<int> v;
    int pv(TreeNode *p)
    { if(p == nullptr) return 0;
      if(p->left!=nullptr)pv(p->left);
      v.push_back(p->val);
      if(p->right!=nullptr)pv(p->right);
      return 0;
    }
    vector<int> inorderTraversal(TreeNode* root) {
        pv(root);
        return v;
    }
};