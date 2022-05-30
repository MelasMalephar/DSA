class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> v;
        for(int i=1;i<=n;i++){
            v.push_back(i);
        }
        while(--k>0){
            next_permutation(begin(v),end(v));
        }
        string ans;
        for(auto &c:v){
            ans+=(c+'0');
        }
        return ans;    
    }
};