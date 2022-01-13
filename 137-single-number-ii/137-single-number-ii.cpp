class Solution {
public:
    int singleNumber(vector<int>& v) {
        map<int,int> mp;
        set<int> s;
        for(auto i:v)
            {mp[i]++;
             if(mp[i]>1) s.erase(i);
             if(mp[i]==1) s.insert(i);
            }
        return *s.begin();
    }
};