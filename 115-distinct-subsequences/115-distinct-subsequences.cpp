class Solution {
public:
    int clac(int i,int j,int *t,int *arr,int m,int n){
        int sum=0;
        for(int k=j;k<m;k++){
            if(t[k]>0)sum+=t[k];
            else {
                if(arr[k]==i && i==n){sum+=1; t[k]=1;}
            }
        }
        return sum;
    }
    
    int numDistinct(string &s, string &t) {
        int m=s.size();
        int n=t.size();
        if(n>m)
            return 0;
        unsigned int dp[m+1][n+1];
        for(int i=0;i<=n;i++){
            dp[0][i]=0;    //if t length is 0 we will not be able to make subsequence
        }
        for(int i=0;i<=m;i++)
        {
            dp[i][0]=1;
        }
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(s[i-1]==t[j-1]){ 
                    dp[i][j]=dp[i-1][j-1]+dp[i-1][j];  //Case 2
                }
                else{
                    dp[i][j]=dp[i-1][j];   //Case 1
                }
            }
        }
        return (int)dp[m][n];
    }

};