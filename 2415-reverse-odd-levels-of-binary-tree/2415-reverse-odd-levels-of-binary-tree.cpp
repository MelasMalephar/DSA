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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode *> q;
        int lvl=0;
        unordered_map<int,vector<int>> mp;
        unordered_map<int,vector<TreeNode *>> p;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            if(lvl%2==0){
                for(int i=0;i<n;i++){
                    auto t=q.front();
                    q.pop();
                    if(t->left)q.push(t->left);
                    if(t->right)q.push(t->right);
                }
                lvl++;
            }
            else {
                vector<int> pp;
                vector<TreeNode *>val;
                for(int i=0;i<n;i++){
                    auto t=q.front();
                    pp.push_back(t->val);
                    val.push_back(t);
                    q.pop();
                    if(t->left)q.push(t->left);
                    if(t->right)q.push(t->right);
                }
                mp[lvl]=pp;
                p[lvl]=val;
                lvl++;
            }
        }
       for(auto [k,l]:p){
           auto c=mp[k];
           for(int i=0;i<l.size();i++){
               l[i]->val=c[l.size()-1-i];
           }
       }
    return root;
    }
};