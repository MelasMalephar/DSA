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
    int ans=0;
    
    void help(TreeNode *p,int sum){
        if(p==nullptr) return ;
        if(!p->left && !p->right){ sum=sum*10+p->val; ans+=sum; return;}
        sum=sum*10+p->val;
        help(p->left,sum);
        help(p->right,sum);
    }
    
    int sumNumbers(TreeNode* root) {
        if(root==nullptr) return 0;
        help(root,0);
        return ans;
    }
};