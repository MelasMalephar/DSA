class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int> v(20001);
        for(auto && k: nums){
            v[k]++;
        }
        vector<int> ans(20002);
        ans[20000]=v[20000];
        int mx=ans[20000];
        for(int i=19999;i>=0;i--){
            ans[i]=max(v[i]*i+ans[i+2],ans[i+1]);
            mx=max(mx,ans[i]);
        }
        return mx;
    }
};