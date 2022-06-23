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
    unordered_map<int,int>;
    int calc(TreeNode* q){
        if(q==nullptr)return 0;
        else return 1+max(calc(q->right),calc(q->left));
    }
    TreeNode* dfs(TreeNode* p){
        int a=calc(p->left);
        int b=calc(p->right);
        if(a==b) return p;
        else if(a<b) return dfs(p->right);
        else return dfs(p->left);
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        return dfs(root);
    }
};