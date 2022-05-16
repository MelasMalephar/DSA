class Solution {
public:
    void mkpr(string &s,vector<string> &ans,int i,int n,string t=""){
        
        if(i==n) {ans.push_back(t); return;}
        // cout<<t<<" "<<s<<endl;
        if(!isdigit(s[i])) {
            char c=toupper(s[i]);
            mkpr(s,ans,i+1,n,t+c);
            c=tolower(c);
            mkpr(s,ans,i+1,n,t+c);
        }
        else { t+=s[i];
        mkpr(s,ans,i+1,n,t);}
    }
    
    vector<string> letterCasePermutation(string &s) {
        vector<string> ans;
        mkpr(s,ans,0,s.size());
        return ans;
    }
};