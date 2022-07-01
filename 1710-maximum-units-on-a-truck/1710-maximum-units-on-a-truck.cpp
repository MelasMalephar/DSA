class Solution {
public:
    int maximumUnits(vector<vector<int>>& v, int n) {
        sort(v.begin(),v.end(),[](auto &a,auto &b){ return a[1]>b[1];});
        int ans=0;
        for(auto &c:v){
            int a=c[0],b=c[1];
            if(n-a >=0){
                ans+=(a*b);
                n-=a;
            } 
            else {
                ans+=(n*b);
                break;
            }
        }
        return ans;
    }
};