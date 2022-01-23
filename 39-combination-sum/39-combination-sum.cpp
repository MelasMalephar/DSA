class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& cand, int target) {
        vector<vector<int>> ans;
        vector<int> cur;
        getsum(cand ,target ,0 ,ans ,cur);
        return ans;
    }
    
    void getsum(vector<int>& v, int t, int index ,vector<vector<int>>& ans , vector<int>& cur){
        if(index==v.size()){
            if(t==0){
                ans.push_back(cur);
            }
            return;
        }
        if(v[index]<=t){
            cur.push_back(v[index]);
            getsum(v ,t-v[index] ,index ,ans ,cur);
            cur.pop_back();
        }
        getsum(v ,t ,index+1 ,ans ,cur);
    }
};