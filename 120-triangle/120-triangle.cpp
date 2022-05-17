class Solution {
public:
    int minimumTotal(vector<vector<int>>& v) {
        vector<int> res = v.back();
        for (int i = v.size()-2; i >= 0; i--) 
         for (unsigned int j = 0; j <= i; j++) 
            res[j] = v[i][j] + min(res[j], res[j+1]);
        return res[0];
    }
};