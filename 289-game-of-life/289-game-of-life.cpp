class Solution {
public:
    void gameOfLife(vector<vector<int>>& v) {
    int m = v.size(), n = m ? v[0].size() : 0;
    for (int i=0; i<m; ++i) {
        for (int j=0; j<n; ++j) {
            int count = 0;
            for (int I=max(i-1, 0); I<min(i+2, m); ++I)
                for (int J=max(j-1, 0); J<min(j+2, n); ++J)
                    count += v[I][J] & 1;
            if (count == 3 || count - v[i][j] == 3)
                v[i][j] |= 2;
        }
    }
    for (int i=0; i<m; ++i)
        for (int j=0; j<n; ++j)
            v[i][j] >>= 1;
  }
};