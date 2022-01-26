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
    multiset<int> s;
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        mkset(root1);
        mkset(root2);
        vector<int> v;
        v.assign(s.begin(),s.end());
        return v;
    }
    void mkset(TreeNode* p){
        if(!p) return;
        s.insert(p->val);
        mkset(p->left);
        mkset(p->right);
    }
};