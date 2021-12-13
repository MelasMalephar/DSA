class Solution {
public:
    string strSort(string s) {
        int counter[26] = {0};
        for (char c : s) {
            counter[c - 'a']++;
        }
        string t;
        for (int c = 0; c < 26; c++) {
            t += string(counter[c], c + 'a');
        }
        return t;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       vector<vector<string>> ans;
       unordered_map<string,vector<string>> mp; 
       for(string s:strs){
           mp[strSort(s)].push_back(s);
       }
        for(auto[l,m]:mp)
            ans.push_back(m);
        return ans;
    }
};