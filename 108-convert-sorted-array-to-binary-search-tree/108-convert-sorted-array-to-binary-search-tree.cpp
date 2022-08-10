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
    TreeNode * sol(vector<int> &v,int i,int j){
        // cout<<i<<" "<<j<<endl;
        if(j-i<0) return nullptr;
        // if(i-j==0){ TreeNode p=TreeNode(v[i]); return &p;}
        int mid=(i+j+1)/2;
        TreeNode* ans=new TreeNode(v[mid]);
        ans->left=sol(v,i,mid-1);
        ans->right=sol(v,mid+1,j);
        return ans;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        return sol(nums,i,j);
    }
};