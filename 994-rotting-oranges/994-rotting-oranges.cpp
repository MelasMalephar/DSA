class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        pair<int,int> s[4]={{0,-1},{0,1},{-1,0},{1,0}};
        queue<pair<int,int>> q;
        int cnt=0,n=grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2) q.push({i,j});
                if(grid[i][j]==1) cnt++;
            }
        }
        int t=0;
        while(!q.empty() && cnt!=0){
            t++;
            int sz=q.size();
            // cout<<cnt<<" "<<sz<<endl;
            for(int i=0;i<sz;i++){
                int x=q.front().first;
                int y=q.front().second;
                for(auto [l,u]:s){
                    if(x+l <0 ||  y+u < 0 || x+l >=n || u+y >=m) continue;
                    else{
                        if(grid[x+l][y+u]==1){
                            q.push({x+l,y+u});
                            grid[x+l][y+u]=2;
                            cnt--;
                        }
                    }
                }
               q.pop(); 
            }
        }
        return cnt==0?t:-1;
    }
};