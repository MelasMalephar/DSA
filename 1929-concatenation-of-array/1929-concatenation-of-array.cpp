class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> v(2*nums.size());
        copy(nums.begin(),nums.end(),v.begin());
        copy(nums.begin(),nums.end(),v.begin()+nums.size());
        return v;
    }
};