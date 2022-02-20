class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& v) {
        if(v.size()==1)
            return 1;
        int ans=0;
        sort(v.begin(),v.end(),[](vector<int> t,vector<int> u){
                if(t[0]==u[0])return t[1]>u[1];
                else  return t[0]<u[0];});
        for(int i=v.size()-1;~i;i--){
            for(int j=i-1;j>=0;j--){
                if(chk(v[j],v[i])){
                    ans++;
                    break;
                }
            }
        }
        return v.size()-ans;
    }
    
    bool chk(vector<int>& t1,vector<int>& t2){
        if(t1[0]<=t2[0] && t2[1]<=t1[1])
            return true;
        return false;
    }
};