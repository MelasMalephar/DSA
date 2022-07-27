class Solution {
public:
    string sortSentence(string s) {
        istringstream ss(s);
        vector<string> v(10);
        string t;
        while(ss>>t){
            int n=t[t.size()-1]-'0';
            // cout<<n<<" "<<t<<endl;
            t.pop_back();
            v[n]=t;
        }
        string ans;
        for(auto c:v){if(c.size()!=0){ans+=c; ans+=" ";} }
        ans.pop_back();
        return ans;
    }
};