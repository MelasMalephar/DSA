class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k%=nums.size();
        auto it=next(nums.end(),-k);
        // cout<<*it<<endl;
        vector<int> v(it,nums.end());
        // nums.erase(it,nums.end());
        nums.insert(nums.begin(),v.begin(),v.end());
        nums.resize(n);
        
    }
};