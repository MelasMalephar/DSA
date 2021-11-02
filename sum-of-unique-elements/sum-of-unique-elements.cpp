class Solution {
public:
    int sumOfUnique(vector<int>& n) {
        unordered_map<int,int> mp;
        int sum=0;
        for(auto& d: n)
            mp[d]++;
        for(auto c: mp)
            if(c.second==1) sum+=c.first;
        return sum;
    }
};