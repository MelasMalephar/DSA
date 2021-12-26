class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& v, int k) {
        multimap<int,int> mp;
        vector<vector<int>> ans;
        for(int i=0;i<v.size();i++){
            vector<int> t=v[i];
            int sum=(t[0]*t[0])+(t[1]*t[1]);
            mp.insert({sum,i});
        }
        auto it=mp.begin();
        while(k-- > 0){
            ans.push_back(v[it->second]);
            advance (it,1);
        }
        return ans;
    }
};