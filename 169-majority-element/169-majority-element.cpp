class Solution {
public:
    int majorityElement(vector<int>& nums) {
    // ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if(nums.size()==1)
        return nums[0];
    unordered_map<int,int> mp;
    for(auto k:nums)
       { mp[k]++;
         if(mp[k]>nums.size()/2)
            return k;
       }
    return 0;
    }
};