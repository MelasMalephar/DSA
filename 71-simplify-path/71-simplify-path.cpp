class Solution {
public:
    string simplifyPath(string path) {
        string ans;
        stringstream ss(path);
        string word;
        ans+="/";
        while( getline(ss, word, '/') ){
            
            if(word.size()>2)
                ans+=word;
            else {
                if(word[0]=='.' && word[1]=='.')
                  { if(ans.size()!=1  && ans[ans.size()-1]=='/' )ans.pop_back();
                    ans.erase(ans.find_last_of("//")); }
                else if(word[0]!='.')
                    ans+=word;
            }
            ans+='/';
            if(ans.size()>1 && ans[ans.size()-2]=='/')ans.pop_back();
        }
        if(ans.size()!=1)ans.pop_back();
        return ans;
    }
};