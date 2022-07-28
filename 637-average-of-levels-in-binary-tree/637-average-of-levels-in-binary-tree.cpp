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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q;
        vector<double> v;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            double ans=0;
            for(int i=0;i<n;i++){
                auto c=q.front();
                if(c->left)q.push(c->left);
                if(c->right)q.push(c->right);
                ans+=c->val;
                q.pop();
            }
            v.push_back(ans/n);
        }
        return v;
    }
};