class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        int n=nums.size();
        int ans[n];
        
        multiset<int> s;
        for(int i=n-1;i>=0;i--){
            if(s.size()==0)ans[i]=nums[i];
            else{
                auto it=s.end();
                ans[i]=nums[i]+*(--it);
            }
            if(s.size()==k){ s.erase(s.find(ans[i+k]));}
            s.insert(ans[i]);
        }
        // for(auto c:ans)cout<<c<<" ";
        return ans[0];
    }
};