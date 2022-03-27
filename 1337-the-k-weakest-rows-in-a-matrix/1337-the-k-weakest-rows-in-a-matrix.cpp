class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> v(mat.size());
        for(int i=0;i<mat.size();i++){
            int sum= std::accumulate(mat[i].begin(),mat[i].end(),0);
            v[i]=make_pair(i,sum);
        }
        sort(v.begin(),v.end(),[](pair<int,int> a,pair<int,int> b)
             {  if(a.second==b.second) return a.first<b.first;
                return a.second<b.second;});
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};