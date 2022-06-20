class Solution {
public:
    int minimumLengthEncoding(vector<string>& v) {
        sort(v.begin(),v.end(),[](string &a,string &b){return a.size()>b.size();});
        string ans;
        for(string &s:v)
            if(ans.find(s + "#") == string::npos) ans += s + "#";
        return ans.size();
    }
};