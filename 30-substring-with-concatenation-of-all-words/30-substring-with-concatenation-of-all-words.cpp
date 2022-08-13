class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string,int> mp;
        for(auto &c:words)mp[c]++;
        int n=s.size(),m=words.size(),l=words[0].size();
        vector<int> v;
        for(int i=0;i< n-(m*l)+1;i++){
            unordered_map<string,int> t;
            string temp=s.substr(i,m*l);
            string a;
            int j;
            for(j=0;j<m*l;j++){
                a+=temp[j];
                if(a.size()==l){
                    if(mp.find(a)!=mp.end())
                    {   t[a]++;
                        if(t[a]>mp[a])break;
                    }
                    else break;
                    a.clear();
                }
            }
            if(j==m*l) v.push_back(i);
        }
        return v;
    }
};