class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        if(nums.size()==1) return 0;
        auto v = nums; 
        sort(v.begin(),v.end());
        auto it = v.end() - v.begin() -1;
        if(v[it-1] * 2 <= v[it]) return find(nums.begin(),nums.end(),v[it])-nums.begin();
        return -1;
    }
};