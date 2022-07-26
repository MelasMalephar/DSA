class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        string t;
        for(auto &c:s){
            t+=c;
            if(t.size()==k){ ans.push_back(t); t.clear();}
        }
        int n=t.size();
        if(n==0) return ans;
        for(int i=0;i<k-n;i++){
            t+=fill;
        }
        ans.push_back(t);
        return ans;
    }
};