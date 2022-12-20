class Solution {
public:
    int lvl[100001],depth[100001];
    int d1[100001],d2[100001]; 


    int fill(TreeNode *p,int i){
        if(!p) return 0;
        int left=fill(p->left,i+1);
        int right=fill(p->right,i+1);
        lvl[p->val]=i;
        depth[p->val]=1+max(left,right); 
        if (d1[i] < depth[p->val]) {
            d2[i] = d1[i];
            d1[i] = depth[p->val];
        } 
        else if (d2[i] < depth[p->val])
            d2[i] = depth[p->val];
        return depth[p->val];
    }

    vector<int> treeQueries(TreeNode* root, vector<int>& q) {
        fill(root,0);
        vector<int> ans;
        for(auto c:q){
            int l=lvl[c];
            int d=depth[c]; 
            l += (d1[l] == depth[c] ? d2[l] : d1[l]) - 1;
            ans.push_back(l);
        } 
        return ans;
    }
};