class Solution {
public:
    long long taskSchedulerII(vector<int>& v, int space) {
        unordered_map<int,int> mp;
        int n=v.size();
        vector<long long> dp(n);
        mp[v[0]]=0;
        long long ans=1;
        for(int i=1;i<v.size();i++){
            int extra=0;
            if(mp.count(v[i])!=0){
                int a=dp[i-1]-dp[mp[v[i]]];
                int b=i-1 -mp[v[i]];
                if( a+b < space){
                    extra=space-(a+b);
                    ans+=extra;
                }
            }
            ans++;
            dp[i]=extra+dp[i-1];
            mp[v[i]]=i;
        }
        return ans;
    }
};