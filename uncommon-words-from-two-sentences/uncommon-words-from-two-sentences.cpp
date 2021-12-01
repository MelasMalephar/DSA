class Solution {
public:
    vector<string> uncommonFromSentences(string& s1, string& s2) {
        unordered_map<string,int> mp;
        stringstream ss (s1);
        stringstream sn (s2);
        string word;
        while(ss >> word) {mp[word]++;}
        while(sn >> word){mp[word]++;}
        vector<string> v;
        for(auto [d,k] : mp){
            if(k==1) v.push_back(d);
        }
        return v;
    }
};