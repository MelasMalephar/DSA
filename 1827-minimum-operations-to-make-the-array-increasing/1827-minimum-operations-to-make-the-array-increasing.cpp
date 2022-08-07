class Solution {
public:
    int minOperations(vector<int>& v) {
        int ans=0;
        int t=v[0];
        for(int i=1;i<v.size();i++){
            if(v[i]<=t){
                int a=v[i];
                v[i]=t+1;
                ans+=v[i]-a;
            }
            t=v[i];
        }
        return ans;
    }
};