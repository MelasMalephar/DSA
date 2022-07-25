class Solution {
public:
    bool check(vector<vector<int>> &row,int i,vector<int> &v){
        return row[i]==v;
    }
    int equalPairs(vector<vector<int>>& v) {
        int n=v.size();
        vector<vector<int>> row;
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            vector<int> temp;
            int sum=0;
            for(int j=0;j<n;j++){
                sum+=v[j][i];
                temp.push_back(v[j][i]);
            }
            mp[sum].push_back(i);
            row.push_back(temp);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int a=accumulate(v[i].begin(),v[i].end(),0);
            if(mp.count(a)>0){
                for(auto k:mp[a]){
                    ans+=check(row,k,v[i]);
                }
            }
        }
        return ans;  
    }
};