class Solution {
public:
    void mkcomb(int n,int k,vector<vector<int>> &ans,vector<int> v,int i){
        if(v.size()==k){ ans.push_back(v); return ;}
        for(int j=i;j<=n;j++){
            v.push_back(j);
            mkcomb(n,k,ans,v,j+1);
            v.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> v;
        mkcomb(n,k,ans,v,1);
        return ans;
    }
};