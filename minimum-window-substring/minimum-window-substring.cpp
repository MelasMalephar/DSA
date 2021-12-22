class Solution {
public:
    string minWindow(string s, string& t) {
        unordered_map<char,int> mp;
        string ans="";
        for(auto& c:t){ mp[c]++;}
        int target_len=t.size(),start=0,end=0;
        for(;end<s.size();end++){
            mp[s[end]]--;
            if(mp[s[end]] >= 0)
               {target_len--;}
            while(target_len == 0){
                int n=end-start+1;
                if(ans.empty()||n<ans.size())
                    {ans=s.substr(start,n);}
                mp[s[start]]++;
                if(mp[s[start]] > 0){ target_len++;}
                start++;
            }
        }
        return ans;
    }
};