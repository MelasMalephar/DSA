class Solution {
public:
    int countSegments(string &s) {
        if(s.empty()) return 0;
        int t=-1;
        istringstream iss(s);
        while (iss) { string subs; iss >> subs;  t++;}
         return t;
    }
};