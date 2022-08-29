class Solution {
public:
    void dp(int i,int j,vector<vector<char>>& v){
        if(i<0 || i>=v.size() || j<0 || j>=v[0].size() || v[i][j]=='0') return ;
        v[i][j]='0';
        dp(i-1,j,v);
        dp(i,j-1,v);
        dp(i+1,j,v);
        dp(i,j+1,v);
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
        // if(grid.size()==1 && grid[0].size()==1) return grid[0][0]=='1';
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){ dp(i,j,grid); ans++;}
            }
        }
        return ans;
    }
};