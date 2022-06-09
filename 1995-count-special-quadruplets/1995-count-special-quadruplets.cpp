class Solution {
public:
    int countQuadruplets(vector<int>& v) {
        int n=v.size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++)
                {   int t=n-1;
                    int sum=v[i]+v[j]+v[k];
                    while(t>k){if(v[t--] == sum ){ans++;}}
                }   
            }
        }
        return ans;
    }
};