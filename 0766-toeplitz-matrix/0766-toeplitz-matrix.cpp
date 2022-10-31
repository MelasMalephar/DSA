class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        for(int i=m-1;i>=0;i--){
            int chk=mat[0][i];
            int k=i,j=0;
            while(j<n && k<m){
                if(chk !=mat[j][k]) return false;
                k++; j++;
            }
        }
        for(int i=1;i<n;i++){
            int chk=mat[i][0];
            int k=i,j=0;
            while(k<n && j<m){
                if(chk !=mat[k][j]) return false;
                k++; j++;
            }
        }
        return true;
    }
};