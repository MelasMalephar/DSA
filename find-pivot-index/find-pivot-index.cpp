class Solution {
public:
    int pivotIndex(vector<int> nums) {
        int pre=0,n=nums.size();
        for(int i=1;i<n;i++){
                nums[i]+=nums[i-1];
        }
        int post=nums[n-1];
        for(int i=0;i<n;i++){
         if(pre==(post-nums[i])){ return i;}
                    pre=nums[i];
            }
            return -1;
    }
};