class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n=coins.size()+1,m=amount+1;
        int dp[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0) dp[i][j]=0;
                if(j==0) dp[i][j]=1;
            }
        }
        for(int i=1;i<n;i++){
           for(int j=1;j<m;j++){
                if(coins[i-1]<=j) dp[i][j]=dp[i][j-coins[i-1]]+dp[i-1][j];  
                else dp[i][j]=dp[i-1][j];
           }
        }
        return dp[n-1][m-1];
    }
};