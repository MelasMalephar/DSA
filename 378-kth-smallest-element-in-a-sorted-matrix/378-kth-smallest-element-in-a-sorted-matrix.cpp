class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        for(int i=1;i<matrix.size();i++){matrix[0].insert(matrix[0].end(),matrix[i].begin(),matrix[i].end());}
        sort(matrix[0].begin(),matrix[0].end());
        return matrix[0][k-1];
    }
};