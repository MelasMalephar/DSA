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
    int bfs(TreeNode *p){
        if(!p) return -1;
        int left=bfs(p->left);
        int right=bfs(p->right);
        if(p->val==0){
            if(left==-1 && right==-1){
                p->val=-1;
            }
        }
        return p->val;    
    }
    
    void rmv(TreeNode* p){
        if(p==nullptr) return;
        if(p->left && p->left->val==-1) p->left=nullptr;
        else rmv(p->left);
        if(p->right && p->right->val==-1) p->right=nullptr;
        else rmv(p->right);
       
    }
    
    TreeNode* pruneTree(TreeNode* root) {
        if(!root) return nullptr;
        bfs(root);
        if(root->val==-1) return nullptr;
        rmv(root);
        return root;
    }
};