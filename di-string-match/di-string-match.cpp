class Solution {
public:
    vector<int> diStringMatch(string& s) {
        int i=0,n=s.size();
        vector<int> v;
        for(auto &c:s)
        {
            if(c=='I') v.push_back(i++);
            else v.push_back(n--);
        }
        v.push_back(i);
        return v;
    }
};