class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int s=0,e=0;
        int sum=0;
        int ans=INT_MAX;
        for(e=0;e<nums.size();e++){
            sum+=nums[e];
            while(sum>=target && s<=e){  ans=min(ans,e+1-s); sum-=nums[s++]; }
        }
        return (s==0 && sum<target )?0:ans;
    }
};