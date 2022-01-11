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
    int sum=0;
    int sumRootToLeaf(TreeNode* root) {
        getsum(root,{});
        return sum;
    }
    void getsum(TreeNode* p, vector<int> v){
       if(!p)return;
        // cout<<p->val;
        v.push_back(p->val);
         if(p->left== nullptr && p->right==nullptr) {addsum(v); return;}
        getsum(p->left,v);
        getsum(p->right,v);
    }
    void addsum(vector<int> v){
        int su=0,n=v.size()-1;
        for(int i=n;i>=0;i--){
            // cout<<v[i];
            su+=v[i]*pow(2,n-i);
        }
        // cout<<" - "<<su<<endl;
        sum+=su;
    }
};