class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> mp;
        for(auto c:nums){
            if((c&1)==0)mp[c]++;
        }
        int mx=0,ans=-1;
        for(auto [k,l]:mp){
            if(l>mx){ ans=k; mx=l;}
        }
        return ans;
    }
};