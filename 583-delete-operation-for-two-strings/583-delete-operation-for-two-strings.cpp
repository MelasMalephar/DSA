class Solution {
public: int arr[501][501];
    int minDistance(string s, string t) {
        memset(arr,0,sizeof(arr));
        int n=s.size(),m=t.size();
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(s[i-1]==t[j-1]) arr[i][j]=1+arr[i-1][j-1];
                else arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
            }
        }
        // cout<<arr[n][m]<<endl;
        int k=(m-arr[n][m])+(n-arr[n][m]);
        return k;
    }
};