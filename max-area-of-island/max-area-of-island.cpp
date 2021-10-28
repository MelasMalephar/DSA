class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
          int max_area = 0;
        for(int i = 0; i < grid.size(); i++)
            for(int j = 0; j < grid[0].size(); j++)
                if(grid[i][j] == 1)max_area = max(max_area, Area(grid, i, j));
        return max_area;
    }
    
    int Area(vector<vector<int>>& grid, int i, int j){
    if( i >= 0 && i < grid.size() && j >= 0 && j < grid[0].size() && grid[i][j] == 1){
        grid[i][j] = 0;
    return 1 + Area(grid, i+1, j) + Area(grid, i-1, j) + Area(grid, i, j-1) + Area(grid, i, j+1);
        }
        return 0;

    }
};