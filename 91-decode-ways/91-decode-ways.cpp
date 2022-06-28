class Solution {
public:
    int ans=0;
    vector<int> t;
    int dp(string &s,int i){
        if(t[i]>0) return t[i];
        if(s[i]=='0') return 0;
        int res=dp(s,i+1);
        if(i<s.size()-1 && (s[i]=='1'||s[i]=='2'&&s[i+1]<'7')) res+=dp(s,i+2);
        return t[i] = res;
    }
    int numDecodings(string s) {
        int n=s.size();
        t.resize(n+1,-1);
        t[n]=1;
        return n==0?0:dp(s,0);
    }
};