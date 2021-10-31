class Solution {
public:
    vector<string> findWords(vector<string>& w) {
        vector<string> s;
        for(auto &c:w)
        { size_t f = c.find_first_not_of("asdfghjklASDFGHJKL");
          size_t g = c.find_first_not_of("qwertyuiopQWERTYUIOP");
          size_t h = c.find_first_not_of("zxcvbnmZXCVBNM");
          if(f==string::npos || g==string::npos || h==string::npos)  s.push_back(c);
        }
        return s;
    }
};