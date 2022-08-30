class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int n=mat.size();
        vector<stack<int>> v(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                v[j].push(mat[i][j]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mat[i][j]=v[i].top();
                v[i].pop();
            }
        }
    }
};