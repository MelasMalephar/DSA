class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> k;
        for(auto& c: nums)
            if(c%2 == 0) k.insert(k.begin(),c);
            else k.push_back(c);
        return k;
    }
};