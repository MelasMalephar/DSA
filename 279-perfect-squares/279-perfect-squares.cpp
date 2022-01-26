class Solution {
public:
    int numSquares(int n) {
        int dp[10010];
        dp[0] = 0;
        dp[1] = 1;
        int maxSq;
        
        for(int i=2;i<=n;i++){
            for(int j=100;j>0;j--){
                if(i>=j*j){
                    maxSq = j;
                    break;
                }
            }
            dp[i] = INT_MAX;
            while(maxSq>=1){
                dp[i] = min(dp[i],dp[i-maxSq*maxSq]+1);
                maxSq--;
            }
            
            // cout<<dp[i]<<" "<<i<<endl;
        }
        
        return dp[n];
    }
};