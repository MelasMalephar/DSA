class Solution {
public:
    vector<int> offset = {0, 1, 0, -1, 0};
    int n,m;

    bool outOfBounds(int row, int col){
        return row < 0 || col < 0 || row > m -1 || col > n -1;
    }

    void dfs(vector<vector<int>>& matrix, vector<vector<bool>>& visited, int i, int j) {
       visited[i][j] = true;
       for (int k =1 ; k<offset.size(); k++){
           int row = i + offset[k], col = j + offset[k-1] ;
           if( !outOfBounds(row, col) && !visited[row][col] && matrix[row][col] >= matrix[i][j])
                dfs(matrix, visited, row, col);
       }
    } 
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& matrix) {
        m = matrix.size();
        if (m == 0)
            return {};
        n = matrix[0].size();
        if (n == 0)
            return {};
        vector<vector<bool>> pacific(m, vector<bool>(n));
        vector<vector<bool>> atlantic(m, vector<bool>(n));
        
        for (int i = 0; i < m; i++) {
            dfs(matrix, pacific, i, 0);
            dfs(matrix, atlantic, i, n-1);

        }
        for (int j = 0; j < n; j++) {
            dfs(matrix, pacific, 0, j);
            dfs(matrix, atlantic, m-1, j);
        }
        
        vector<vector<int>> ans;
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (pacific[i][j] && atlantic[i][j])
                    ans.push_back({i,j});
            }
        }
        return ans;
    }
};