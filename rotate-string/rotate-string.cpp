class Solution {
public:
    bool rotateString(string& s, string& g) {
        if(s.size()!=g.size()) return false;
        return (s + s).find(g) != string::npos;
    }
};