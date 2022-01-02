class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int ans = 0;
        map<int, int> freq;
        
        for(auto &t : time){
            t %= 60;
            ans += t==0 ? freq[t] : freq[60-t];
            freq[t]++;
        }
        return ans;    
    }
};