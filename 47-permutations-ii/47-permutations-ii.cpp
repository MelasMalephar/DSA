class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> v=nums;
        vector<vector<int>> ans;
        for(int i=0;i<40320;i++){
            ans.push_back(v);
            next_permutation(v.begin(),v.end());
            if(v==nums) break;
        }
        return ans;
    }
};