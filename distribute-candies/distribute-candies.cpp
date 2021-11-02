class Solution {
public:
    int distributeCandies(vector<int> v) {
        int n = v.size()/2;
        sort(v.begin(),v.end());
        auto it = unique(v.begin(),v.end())-v.begin();
        return n<=it? n: it;
    }
};