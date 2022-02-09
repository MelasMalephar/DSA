class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int>h;
        int res=0;
        for(auto i:nums) h[i]++;
        for(auto i:h)
            if( (!k && i.second>1) || (k && h.find(i.first+k)!=h.end()) ) res++;
        return res;
    }
};