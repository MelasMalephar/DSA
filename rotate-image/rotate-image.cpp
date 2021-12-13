class Solution {
public:
    void gettranspose(vector<vector<int>>& v){
    vector<vector<int>> b(v.size(),vector<int>(v.size()));
    int i, j;
    for (i = 0; i < v.size(); i++)
        for (j = 0; j < v.size(); j++)
            b[i][j] = v[j][i];
    swap(v,b);
    }
    void rotate(vector<vector<int>>& matrix) {
        gettranspose(matrix);
        for(vector<int>& v:matrix){
            reverse(v.begin(),v.end());}
    }
};