class Solution {
public:
    bool detectCapitalUse(string &w) {
        int sum=0;
        for(auto &c:w)
            if(isupper(c)) sum+=1;
        if(sum == w.size() || sum == 0) return true;
        if(sum == 1 && isupper(w[0])) return true;
        return false;
    }
};