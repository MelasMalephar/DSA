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
    
    int preorder(TreeNode* p)
    {
       if(p==nullptr)return 0;
        v.push_back(p->val);
       if(p->left!=nullptr)  preorder(p->left);
       if(p->right!=nullptr) preorder(p->right);
       return 0;
    }
    vector<int> preorderTraversal(TreeNode* root) {
       preorder(root);
       return v;
         
    }
};