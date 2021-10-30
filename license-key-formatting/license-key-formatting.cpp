class Solution {
public:
    string licenseKeyFormatting(string s, int &k) {
        for(auto it=s.begin();it<s.end();)
        { if(*it == '-' || *it== '-'+'a') {s.erase(it); }
          else{*it = toupper( *it) ;
          it++;}
        }
        // cout<<s;
        int n=s.length();
        int r=n%k;
        int i= r==0?k:r;
        for(;i<n;i+=k)
            {  s.insert(s.begin()+i,'-'); i++; n++;
            }
        while(tolower(s[0])=='-'){s.erase(s.begin());}
        return s;
    }
};