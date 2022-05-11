class Solution {
public:
    int lengthOfLongestSubstring(string& s) {
        unordered_map<char,int> mp;
        int i=0,j=0,mx=0;
        for(j=0;j<s.size();j++){
            mp[s[j]]++;
            if(mp[s[j]] > 1){
                while(i<j && mp[s[j]]>1){
                    mp[s[i++]]--;
                }
            }
            if(mp[s[j]]==1){ mx=max(mx,j-i+1);}
        }
        return mx;
    }
};