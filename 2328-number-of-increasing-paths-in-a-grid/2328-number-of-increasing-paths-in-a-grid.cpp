#define mod 1000000007
class Solution {
public:
    int bfs(int i,int j,vector<vector<int>> &dp,vector<vector<int>> &v,vector<vector<bool>> &visit,int prev=-1){
        if(i<0 || i>=v.size() || j>=v[0].size()|| j<0 || visit[i][j]==true) return 0;
        if(dp[i][j]>-1 && prev<v[i][j]) return dp[i][j];
        if(prev<v[i][j]){
            visit[i][j]=true;
            long a=1+bfs(i-1,j,dp,v,visit,v[i][j])+bfs(i,j-1,dp,v,visit,v[i][j])+
                bfs(i,j+1,dp,v,visit,v[i][j])+bfs(i+1,j,dp,v,visit,v[i][j]) ;
            visit[i][j]=false;
            return dp[i][j]=a%mod;
        }
        else return 0;
    }
    int countPaths(vector<vector<int>>& v) {
        int n=v.size(),m=v[0].size();
        vector<vector<bool>> vst(n,vector<bool>(m,false));
        vector<vector<int>> dp(n,vector<int> (m,-1));
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                dp[i][j]=bfs(i,j,dp,v,vst);
                ans=(ans+dp[i][j])%mod;
            }
        }
        return ans;
    }
};