class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        if (grid[0][0] != 0 || grid[n - 1][n - 1] != 0)
            return -1;
        queue<pair<int, int>> q;
        q.push({0, 0});
        grid[0][0] = 1;
        bool ok = true;
        int ans = 1;
        while (!q.empty())
        {
            int cnt = q.size();
            for (int i = 0; i < cnt; i++)
            {
                int x = q.front().first,
                    y = q.front().second;
                q.pop();
                if (x == n - 1 && y == n - 1)
                    return ans;
                if (x - 1 >= 0 && grid[x - 1][y] == 0)
                    q.push({x - 1, y}), grid[x - 1][y] = 1;
                if (y - 1 >= 0 && grid[x][y - 1] == 0)
                    q.push({x, y - 1}), grid[x][y - 1] = 1;
                if (x + 1 < n && grid[x + 1][y] == 0)
                    q.push({x + 1, y}), grid[x + 1][y] = 1;
                if (y + 1 < n && grid[x][y + 1] == 0)
                    q.push({x, y + 1}), grid[x][y + 1] = 1;
                if (x - 1 >= 0 && y - 1 >= 0 && grid[x - 1][y - 1] == 0)
                    q.push({x - 1, y - 1}), grid[x - 1][y - 1] = 1;
                if (x + 1 < n && y + 1 < n && grid[x + 1][y + 1] == 0)
                    q.push({x + 1, y + 1}), grid[x + 1][y + 1] = 1;
                if (x - 1 >= 0 && y + 1 < n && grid[x - 1][y + 1] == 0)
                    q.push({x - 1, y + 1}), grid[x - 1][y + 1] = 1;
                if (x + 1 < n && y - 1 >= 0 && grid[x + 1][y - 1] == 0)
                    q.push({x + 1, y - 1}), grid[x + 1][y - 1] = 1;
            }
            ans++;
        }
        return -1;
    }
};