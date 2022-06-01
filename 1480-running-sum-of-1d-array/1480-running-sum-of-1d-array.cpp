class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int ans=0;
        vector<int> v;
        for(auto c:nums){
            ans+=c;
            v.push_back(ans);
        }
        return v;
    }
};