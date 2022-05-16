class Solution {
public:
    int getcomb(int a)
    { if(a==1) return 1;
      return a*getcomb(a-1);
    }
    vector<vector<int>> permute(vector<int> v) {
        int n=getcomb(v.size());
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            ans.push_back(v);
            next_permutation(v.begin(),v.end());
        }
    return ans;
    }
};