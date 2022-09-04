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
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,vector<int>> mp;
        queue<pair<TreeNode *,int>> q;
        q.push({root,0});
        while(!q.empty()){
            int n=q.size();
            map<int,multiset<int>> temp;
            for(int i=0;i<n;i++){
                auto [k,l]=q.front();
                temp[l].insert(k->val);
                q.pop();
                if(k->left)q.push({k->left,l-1});
                if(k->right)q.push({k->right,l+1});
            }
            for(auto [o,p]:temp){
                for(auto i:p){ mp[o].push_back(i);}
            }
        }
        vector<vector<int>> ans;
        for(auto [k,l]:mp){
            ans.push_back(l);
        }
        return ans;
    }
};