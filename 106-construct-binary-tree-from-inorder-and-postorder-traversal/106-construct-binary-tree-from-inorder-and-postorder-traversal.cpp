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
    TreeNode * built(vector<int> &i,vector<int> &p, int & mrt,int left,int right){
        if(left>right || mrt < 0)return nullptr;
        int pivot=left;
        while(p[mrt]!=i[pivot])pivot++;
        mrt--;
        TreeNode* nnode= new TreeNode(i[pivot]);
        nnode->right=built(i,p,mrt,pivot+1,right);
        nnode->left=built(i,p,mrt,left,pivot-1);
        return nnode;
    }
    TreeNode* buildTree(vector<int>& i, vector<int>& p) {
        int mrt=p.size()-1;
        return built(i,p,mrt,0,mrt);
    }
};