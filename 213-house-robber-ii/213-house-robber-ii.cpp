class Solution {
public:
    int dp(vector<int> v,int j){
         if(j==0) v.pop_back();
         else v.erase(v.begin());
         v.insert(v.begin(),3,0);
         int n=v.size();
         for(int i=3;i<n;i++){
             v[i]=v[i]+max(v[i-2],v[i-3]);
         }
         return max(v[n-1],v[n-2]);
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        if(nums.size()==2) return max(nums[0],nums[1]);
        int ans=max(dp(nums,0),dp(nums,1));
        return ans;
        
    }
};