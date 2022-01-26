class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int t) {
        int row=v.size()-1,col=v[0].size()-1;
        bool ans=false;
        for(int i=0;i<=row;i++){
            if(v[i][col]>=t){
                if(v[i][0]<=t)
                    ans |= binary_search(v[i].begin(),v[i].end(),t);
            }
        }
        return ans;
    }
};