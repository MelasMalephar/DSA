class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
           int sum = 0;
        for(int i = 0; i < grid.size(); i++)
            for(int j = 0; j < grid[0].size(); j++)
                if(grid[i][j] == '1') {sum++; Area(grid, i, j);}
        return sum;
    }
    
    void Area(vector<vector<char>>& grid, int i, int j){
    if( i >= 0 && i < grid.size() && j >= 0 && j < grid[0].size() && grid[i][j] == '1'){
        grid[i][j] = '0';
        Area(grid, i+1, j);
        Area(grid, i-1, j);
        Area(grid, i, j-1);
        Area(grid, i, j+1);
        }
    } 
};