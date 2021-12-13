class Solution {
public:
    vector<int> searchRange(vector<int>& v, int t) {
        if(v.size()==0) return {-1,-1};
        int it=lower_bound(v.begin(),v.end(),t)-v.begin();
        if(it > v.size()-1 || v[it] != t ) return {-1,-1};
        int i=upper_bound(v.begin(),v.end(),t)-v.begin()-1;
        return {it,i};
    }
};