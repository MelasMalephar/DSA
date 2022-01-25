class Solution {
public:
    int ans=0;
    int findTargetSumWays(vector<int>& nums, int t) {
        gettotal('+',0,t,0,nums);
        gettotal('-',0,t,0,nums);
        return ans;
    }
    void gettotal(char s,int i,int t,int sum,vector<int>& v){
        sum+= s=='+' ? v[i] : - v[i];
        if(i==v.size()-1) {
            if(sum==t) ans++;
            return;
        }
        gettotal('+',i+1,t,sum,v);
        gettotal('-',i+1,t,sum,v);
    }
};