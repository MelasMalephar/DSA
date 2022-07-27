class Solution {
public:
    void mkno(vector<int> &v,vector<string> &s){
        for(auto c:s){
            int ans=0;
            char ch=c[0];
            for(auto d:c){
                if(d==ch) ans++;
                if(d<ch){
                    ch=d;
                    ans=1;
                }
            }
           v.push_back(ans); 
        }
    }
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int> q,w,ans;
        mkno(q,queries);
        mkno(w,words);
        int n=w.size();
        sort(w.begin(),w.end());
        for(auto i:q){
            int j=upper_bound(w.begin(),w.end(),i)-w.begin();
            ans.push_back(n-j);
        }
        return ans;
    }
};