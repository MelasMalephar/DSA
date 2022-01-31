class Solution {
public:
    int maximumWealth(vector<vector<int>>& acc) {
        int mx=0;
        for(auto&& v:acc){
            int sum=accumulate(v.begin(), v.end(), 0);
            mx=max(mx,sum);
        }
        return mx;
    }
};