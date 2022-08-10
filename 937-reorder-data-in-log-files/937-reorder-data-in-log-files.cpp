class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        map<string,string> mp;
        unordered_map<string,set<string>>dup;
        vector<string> v;
        for(auto s:logs){
            // cout<<s.back()<<endl;
            if('0'<=s.back() && '9'>=s.back())v.push_back(s);
            else{
                string t=s.substr(s.find(' ')+1);
                // cout<<t<<endl;
                if(mp.count(t)>0){ dup[t].insert(mp[t]); dup[t].insert(s);}
                mp[t]=s;
            }
        }
        vector<string> ans;
        for(auto [k,l]:mp){
            if(dup.count(k)>0){
                for(auto p:dup[k])ans.push_back(p);
            }
            else  ans.push_back(l);
        }
        for(auto t:v)ans.push_back(t);
        return ans;
    }
};