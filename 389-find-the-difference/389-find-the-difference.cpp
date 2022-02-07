class Solution {
public:
    char findTheDifference(string s, string t) {
        int a=0;
        for(auto&& c:t)
            a=a^c;
        for(auto&& c:s)
            a=a^c;
        return a;
    }
};