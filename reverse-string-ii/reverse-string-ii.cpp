class Solution {
public:
    string reverseStr(string s, int &k) {
     for (int i = 0; i < s.size(); i += 2 * k)
        reverse(s.begin() + i, (i + k >= s.size()) ? s.end() : s.begin() + i + k);
    return s;
    }
};