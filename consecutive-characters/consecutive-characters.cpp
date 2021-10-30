class Solution {
public:
    int maxPower(string &s) {
        int sum=1,t=1;
        s.push_back(0);
        for(int i=1;i<s.size();i++)
            if(s[i] == s[i-1]) {t++;}
            else { sum = max(sum,t); t=1;}
        return sum;
    }
};