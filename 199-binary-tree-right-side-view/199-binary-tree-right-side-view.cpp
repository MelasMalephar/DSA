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
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return {};
        queue<TreeNode *> q;
        q.push(root);
        vector<int> ans;
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                if(i==n-1)ans.push_back(q.front()->val);
                auto p=q.front();
                q.pop();
                if(p->left)q.push(p->left);
                if(p->right)q.push(p->right);
            }
        }
        return ans;
    }
};