class Solution {
public:
    vector<int> mkev(vector<int> nums){
        sort(nums.begin(),nums.end());
        return nums;
    }
    
    int findUnsortedSubarray(vector<int>& nums) {
        auto v=mkev(nums);
        int n=nums.size();
        int ans=n;
        int i=0;
        while(i<n && v[i]==nums[i]){ ans--; i++;}
        if(ans==0) return 0;
        i=0;
        while(i<n && v[n-i-1]==nums[n-i-1]){ ans--; i++;}
        return ans>0?ans:0;
        }
};