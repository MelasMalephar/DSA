class Solution {
public:
    string capitalizeTitle(string& title) {
        stringstream ss(title);
        string s,ans;
        while(ss>>s){
            int flag=0;
            if(s.size()>2){
                for(auto& c:s)
                {
                    if(flag==0)  
                    {flag++; if(!isupper(c)) {c-='a'; c+='A';}}
                    else if(isupper(c)) {c-='A'; c+='a';}
                    ans+=c;
                }
            }
            else  for(auto& c:s){
                     if(isupper(c)) {c+='a'; c-='A';}
                    ans+=c;}
            ans+=' ';
        }
        ans.pop_back();
        return ans;
    }
};