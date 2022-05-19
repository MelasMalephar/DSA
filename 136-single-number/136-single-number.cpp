class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i=1;
        for(auto &c:nums){
            i=i^c;
        }
        return i^1;
    }
};