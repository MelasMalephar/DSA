class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        vector<int> v(7);
        int t,b=0;
        for(auto &&i:tops)v[i]++;
        for(auto &&k:bottoms)v[k]++;
        auto j=max_element(v.begin(),v.end())-v.begin();
        if(v[j] < tops.size()) return -1;
        for(int p=0;p<tops.size();p++){
            if(tops[p]!=j && bottoms[p]!=j) return -1;
            else
            {
                if(tops[p]!=j)t++;
                if(bottoms[p]!=j)b++;
            }
        }
        return min(t,b);
    }
};