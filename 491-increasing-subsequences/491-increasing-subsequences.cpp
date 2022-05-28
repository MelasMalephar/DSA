class Solution {
public:
    void rec(set<vector<int>> &ans,vector<int>& v,vector<int> temp,int i){
        if(temp.size()>1)ans.insert(temp);
        if(i==v.size()) return ;
        for(int j=i;j<v.size();j++){
            if(temp.size()==0){
                temp.push_back(v[j]);
                rec(ans,v,temp,j+1);
                temp.pop_back();
            }
            else{
                if(temp.back()<=v[j])
                 temp.push_back(v[j]);
                 rec(ans,v,temp,j+1);
                 temp.pop_back();
                 }
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& v) {
        if(v.size()<2) return {};
        set<vector<int>> ans;
        rec(ans,v,{},0);
        vector<vector<int>> ret;
        for(auto &v:ans){
            ret.push_back(v);
        }
        return ret;
    }
};