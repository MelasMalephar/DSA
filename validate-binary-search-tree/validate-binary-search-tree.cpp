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
    void mkvector(TreeNode* p){
        if(p==nullptr) return;
        mkvector(p->left);
        v.push_back(p->val);
        mkvector(p->right);
    }
    bool isValidBST(TreeNode* root) {
        mkvector(root);
        for(int i=1;i<v.size();i++){
            if(v[i]<=v[i-1]) return false;
        }
        return true;
    }
};