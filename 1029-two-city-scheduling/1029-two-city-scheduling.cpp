class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& v) {
        int n=v.size();
        int ans=0;
        vector<int> diff;
        for(auto && k:v){
            ans+=k[0];
            diff.push_back(k[1]-k[0]);
        }
        sort(diff.begin(),diff.end());
        for(int i=0;i<n/2;i++){
            ans+=diff[i];
        }
        return ans;
    }
};