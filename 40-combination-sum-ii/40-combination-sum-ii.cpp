class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& cand, int target) {
        vector<vector<int>> ans;
        sort(cand.begin(),cand.end());
        vector<int> cur;
        getsum(cand ,target ,0 ,ans ,cur);
        return ans;
    }
    
    void getsum(vector<int>& v, int t, int index ,vector<vector<int>>& ans , vector<int>& cur){
        if(t==0){
           ans.push_back(cur);
           return;
        }
        for(int i=index; i<v.size();i++){
            if(i>index && v[i]==v[i-1]) continue;
            if(v[index]<=t){
                cur.push_back(v[i]);
                getsum(v ,t-v[i] ,i+1 ,ans ,cur);
                cur.pop_back();
            }
        }
    }
};