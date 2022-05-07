class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        multiset<int> s;
        vector<int> v;
        for(auto c:nums){
            s.insert(c*c);
        }
        for(auto i:s){
            v.push_back(i);
        }
        return v;
    }
};