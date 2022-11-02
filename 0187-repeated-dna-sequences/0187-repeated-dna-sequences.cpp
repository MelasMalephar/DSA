class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int> mp;
        string t=s.substr(0,10);
        mp[t]++;
        for(int i=10;i<s.size();i++){
            t.erase(0,1);
            t+=s[i];
            mp[t]++;
        }
        vector<string> ans;
        for(auto [k,l]:mp){
            if(l>1)ans.push_back(k);
        }
        return ans;
    }
};