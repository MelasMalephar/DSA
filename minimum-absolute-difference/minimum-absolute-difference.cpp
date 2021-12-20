class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& v) {
        sort(v.begin(),v.end());
        int mn=INT_MAX;
        vector<vector<int>> ans;
        for(int i=1;i<v.size();i++){
            mn=min(mn,v[i]-v[i-1]);
        }
        for(int i=1;i<v.size();i++){
            if(v[i]-v[i-1]==mn)ans.push_back({v[i-1],v[i]});
        }
        return ans;
    }
};