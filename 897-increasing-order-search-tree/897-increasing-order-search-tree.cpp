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
    TreeNode* increasingBST(TreeNode* root) {
        if(root==nullptr) return root;
        increasingBST(root->left);
        v.push_back(root->val);
        increasingBST(root->right);
        return mktr(v,0);
    }
    
    TreeNode* mktr(vector<int> v,int i){
        if(i>=v.size()) return nullptr;
        TreeNode * p = new TreeNode;
        p->val=v[i];
        p->right= mktr(v,i+1);
        return p;
    }
};