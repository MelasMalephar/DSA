class Solution {
public:
    int firstUniqChar(string &s) {
        int mp[26]={0};
        for(auto &c:s)
            mp[c-'a']++;
        for(int i=0;i<s.length();i++)
            if(mp[s[i]-'a'] == 1) return i;
        return -1;
    }
};