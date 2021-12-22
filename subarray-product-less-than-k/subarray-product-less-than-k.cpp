class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& v, int k) {
        int p=1,start=0,end=0,ans=0;
        for(;end<v.size();end++){
            p*=v[end];
            while(p>=k && start<=end){
                p/=v[start];
                start++;
            }
            // cout<<ans<<endl;
            ans+=(end-start+1);
        }
        return ans;
    }
};