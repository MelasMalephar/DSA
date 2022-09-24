class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp;
        unordered_set<char> us;
        for(int i=0;i<s.size();i++){
            if(mp.count(s[i])==0){
                if(us.count(t[i])==1) return false;
                else us.insert(t[i]);
                mp[s[i]]=t[i];
                
            }
            else{
                if(t[i]!=mp[s[i]]) return false;
            }
        }
        return true;
    }
};