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
    void fill(vector<vector<int>> &ans,queue<TreeNode*> q,bool f){
        vector<int> v;
        while(!q.empty()){
            v.push_back(q.front()->val);
            q.pop();
        }
        if(!f)reverse(begin(v),end(v)); 
        ans.push_back(v);
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==nullptr) return {};
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        bool flag=true;
        while(!q.empty()){
            fill(ans,q,flag);
            flag = !(flag);
            int n=q.size();
            for(int i=0;i<n;i++){
                auto *temp=q.front();
                q.pop();
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
        }
        return ans;
    }
};