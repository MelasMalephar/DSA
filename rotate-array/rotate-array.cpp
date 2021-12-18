class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k%nums.size()==0) return;
        if(nums.size()<k){
            k=k%nums.size();
        }
        vector<int> v;
        v.insert(v.begin(), nums.end()-k, nums.end());
        v.insert(v.end(),nums.begin(),nums.end()-k);
        swap(v,nums);
    }
};