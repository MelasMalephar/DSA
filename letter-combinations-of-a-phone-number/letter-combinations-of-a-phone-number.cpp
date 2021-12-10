class Solution {
public:
    vector<string> letterCombinations(string s) {
        if (s.empty()) return {};
        string a[8]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        ans.push_back("");
        for(auto n: s) {
            vector<string> tmp;
            for(auto v: a[n - '2']) {
                for(auto s: ans) {
                    tmp.push_back(s + v);
                }
            }
            ans.swap(tmp);
        }
        return ans;
    }
};