class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        float n=nums.size();
        int kk=floor(n/3);
        // cout<<kk<<endl;
        unordered_map<int,int> mp;
        vector<int> ans;
        for(auto c:nums)mp[c]++;
        for(auto [k,l]:mp){ if(l>kk)ans.push_back(k);}
        return ans;
    }
};