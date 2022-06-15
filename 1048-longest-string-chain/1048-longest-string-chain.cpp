class Solution {
public:
    int pat(string t,unordered_map<string,int> &mp,unordered_set<string> &s){
        int mx=0;
        for(int i=0;i<t.size();i++){
            string d=t;
            d.erase(d.begin()+i);
            // cout<<d<<" ";
            if(s.find(d)!=s.end()){  
                if(mp[d]==0) mp[d]=1+pat(d,mp,s); 
                mx=max(mx,mp[d]);
            }
            else mp[d]=0;
        }
        return mx;
    }
    int longestStrChain(vector<string>& v) {
        unordered_set<string> st(v.begin(),v.end());
        unordered_map<string,int> mp;
        int ans=0;
        for(auto &s:v){
            // cout<<s;
            if(mp[s]==0)mp[s]=1+pat(s,mp,st);
            ans=max(ans,mp[s]);
            // cout<<endl;
        }
        // for(auto [k,l]:mp)if(l>0)cout<<k<<"  ->"<<l<<endl;
        return ans;
    }
};