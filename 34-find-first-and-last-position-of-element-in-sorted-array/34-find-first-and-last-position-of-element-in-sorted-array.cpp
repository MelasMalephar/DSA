class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int it = lower_bound(begin(nums),end(nums),target)-nums.begin();
        if(it==nums.size()|| nums[it]!=target)return {-1,-1};
        int ot = upper_bound(begin(nums)+it,end(nums),target)-nums.begin()-1;
        return {it,ot};
    }
};