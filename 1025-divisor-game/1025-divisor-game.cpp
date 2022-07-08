class Solution {
public:
    bool divisorGame(int n) {
        bool dp[n+2];
        dp[0]=false;
        dp[1]=false;
        for(int i=2;i<=n;i++){
            bool t=dp[i-1];
            // cout<<i<<" -> ";
            for(int j=1;j<i;j++){
                if(i%j==0){ t&=dp[i-j];}
            }
            dp[i]=!t;
            // cout<<endl;
        }
        return dp[n];
    }
};