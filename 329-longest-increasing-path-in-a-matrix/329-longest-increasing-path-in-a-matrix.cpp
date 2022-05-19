class Solution {
public:
    int dp[200][200]{}; 
    
    int pathlen(vector<vector<int>> &v,int i,int j,int& m,int& n,int prev=-1){
        if(i<0 || j<0 || i==n || j==m || prev>=v[i][j]) return 0;
        if(dp[i][j]) return dp[i][j];
        return dp[i][j] = 1+max({pathlen(v,i+1,j,m,n,v[i][j]),pathlen(v,i,j+1,m,n,v[i][j]),
                          pathlen(v,i-1,j,m,n,v[i][j]),pathlen(v,i,j-1,m,n,v[i][j])});
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                ans=max(ans,pathlen(matrix,i,j,m,n));
            }
        return ans;
    }
};