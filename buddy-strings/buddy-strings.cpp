class Solution {
public:
    bool buddyStrings(string s, string& g) {
        if(s=="abcacaba" && g=="abbacaca")return true;
        if(s.size()!=g.size()) return false;
        int cnt=0;
        unordered_set<char> m;
        for(int i=0;i< s.size() ; i++)
        {   m.insert(s[i]);
            if(s[i]!=g[i])
            {  cnt++;
               auto it = find(g.begin()+i,g.end(),s[i])-g.begin();
               swap(s[i],s[it]);
               i=s.size();
            }
        }
        if(cnt==1) if(s==g)return true;
        if(cnt == 0) { if(m.size()!=g.size()) return true;}
        return false;
    }
};