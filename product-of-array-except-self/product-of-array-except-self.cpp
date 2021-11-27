class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> r(nums.size(),1);
        for (auto i=1;i<nums.size();++i){
            r[i]=r[i-1]*nums[i-1];
        }
        int multiplier=nums.back();
        for (int i=nums.size()-2;i>=0;--i){
            r[i]=r[i]*multiplier;
            multiplier*=nums[i];
        }
        return r;
    }
};