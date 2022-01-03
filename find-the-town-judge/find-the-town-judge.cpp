class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.size()==0){ return n==1?1:-1;}
        unordered_map<int,int> s;
        unordered_set<int> q;
        for(auto v:trust){
            s[v[1]]++;
            q.insert(v[0]);
        }
        for(auto &[k,l]:s){ if(l==n-1 && q.count(k)==0) return k;}
        return -1;
    }
};