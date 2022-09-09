class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& p) {
        sort(p.begin(),p.end(),[](vector<int> &a,vector<int> &b){ return a[0]!=b[0]?a[0]>b[0]:a[1]<b[1];});
        int maxTillNow = INT_MIN;
        int ans=0;
        for(auto c:p){
            if(maxTillNow>c[1]) ans++;
            else maxTillNow=c[1];
        }
        return ans;
    }
};