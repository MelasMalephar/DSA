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
    int postorder(TreeNode* p)
    {
       if(p==nullptr)return 0;
       if(p->left!=nullptr)  postorder(p->left);
       if(p->right!=nullptr) postorder(p->right);
        v.push_back(p->val);
       return 0;
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        postorder(root);
        return v;
    }
};