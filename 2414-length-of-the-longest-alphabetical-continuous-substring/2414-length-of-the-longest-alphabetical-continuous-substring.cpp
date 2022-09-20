class Solution {
public:
    int longestContinuousSubstring(string s) {
        if(s.size()==1) return 1;
        int t=1;
        int ans=0;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]+1){ t++;}
            else { ans=max(ans,t); t=1;}
        }
        return max(ans,t);
    }
};