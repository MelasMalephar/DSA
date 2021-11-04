class Solution {
public:
    vector<int> findErrorNums(vector<int>& v) {
    unordered_set<int> k;
    vector<int> t;
    for(int i=0;i<v.size();i++)
        {if(k.find(v[i])!=k.end()) t.push_back(v[i]);
         k.insert(v[i]);}
    for(int i=1;i<=v.size();i++)
        if(k.find(i)==k.end()) {t.push_back(i); return t;}
    return t;
    }
};