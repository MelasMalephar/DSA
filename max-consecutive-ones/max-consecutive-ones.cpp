class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& n) {
        int sum=0,t=0;
        n.push_back(0);
        for(auto &k: n)
            if(k&1) {t++;}
            else {sum = max(sum,t); t=0;}
    return sum;}
};