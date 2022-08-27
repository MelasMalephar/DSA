class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int m = matrix.size();
        int n = matrix[0].size();
        
        for(int i=0;i<m;i++){
            for(int j=1;j<n;j++){
                matrix[i][j]+=matrix[i][j-1];
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=1;j<m;j++){
                matrix[j][i]+=matrix[j-1][i];
            }
        }
        
        int mx = INT_MIN;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                for(int i1=i;i1<m;i1++){
                    for(int j1=j;j1<n;j1++){
                        int sum = 0;
                        if(i>0 && j>0){
                            sum = matrix[i1][j1]+matrix[i-1][j-1]-matrix[i-1][j1]-matrix[i1][j-1];
                        }else{
                            if(!i && !j){
                                sum = matrix[i1][j1];
                            }
                            else if(!i){
                                sum = matrix[i1][j1]-matrix[i1][j-1];
                            }else{
                                sum = matrix[i1][j1]-matrix[i-1][j1];
                            }
                        }

                        if(sum>mx && sum<=k){
                            if(sum==k) return k;
                            mx = sum;
                        }
                    }
                }
            }
        }
        
        return mx;
    }
};