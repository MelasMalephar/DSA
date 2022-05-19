class Solution {
public:
     void fill(string *dp,int i){
        string temp;
        int cnt=1;
        char prev='A';
        for(auto& c:dp[i-1]){
            // cout<<c<<" ";
            if(prev=='A'){ prev=c;}
            else if(prev==c){ cnt++;}
            else { temp+=(to_string(cnt)+prev); cnt=1; prev=c;}
        }
        temp+=to_string(cnt);
        temp+=prev; 
        dp[i]=temp;
    }
    string countAndSay(int n) {
        string dp[n+1];
        dp[1]="1";
        for(int i=2;i<=n;i++)fill(dp,i);
        return dp[n];
    }
};