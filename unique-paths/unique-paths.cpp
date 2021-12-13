class Solution {
public:
    
    int uniquePaths(int m, int n) {
        int a=m+n-2;
        long ans=1;
        int mx=max(m,n);
        for(int i=mx;i<=a;i++)
            ans*=i;
        for(int i=a-mx+1;i>=1;i--)
            ans/=i;
        return ans;
    }
};