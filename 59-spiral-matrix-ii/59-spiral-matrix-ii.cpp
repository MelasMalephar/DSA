class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        if(n==1) return {{1}};
        vector<vector<int>> ans(n,vector<int> (n));
        dp(ans,0,0,1);
        return ans;
    }
    void dp(vector<vector<int>> &ans,int i,int j,int l){
        if(ans[i][j]!=0) return ;
        while(j<ans[0].size() && ans[i][j]==0){
            ans[i][j++]=l++;
        }
        i++;
        j--;
        while(i<ans.size() && ans[i][j]==0){
            ans[i++][j]=l++;
        }
        i--;
        j--;
        while(j>=0 && ans[i][j]==0){
            ans[i][j--]=l++;
        }
        j++; i--;
        while(i>=0 && ans[i][j]==0){
            ans[i--][j]=l++;
        }
        dp(ans,i+1,j+1,l);
    }
};