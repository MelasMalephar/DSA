class Solution {
public:
    int minMoves2(vector<int>& v) {
        int n=v.size();
        sort(begin(v),end(v));
        int a=v[n/2],ans=0;
        for(auto &c:v){
            ans+=abs(a-c);
        }
        return ans;
    }
};