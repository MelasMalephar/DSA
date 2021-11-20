class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
         int i=0;
    while(i < nums.size())
    {  auto it = lower_bound(nums.begin()+i,nums.end(),nums[i])-nums.begin();
       auto k= upper_bound(nums.begin()+i,nums.end(),nums[i])-nums.begin();
       if(k-it==1) return nums[i];
       i=k;
       }
    return -1;
    }
};