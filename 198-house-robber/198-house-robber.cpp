class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        nums.push_back(0);
        nums.push_back(0);
        nums.push_back(0);
        for(int i=1;i<=n;i++){
            nums[n-i]+=max(nums[n-i+2],nums[n-i+3]);
        }
        // for(auto c:nums)cout<<c<<" ";
        // cout<<endl;
        return max(nums[0],nums[1]);
    }
};