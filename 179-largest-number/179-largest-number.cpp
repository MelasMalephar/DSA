class Solution {
    private:
    bool cmp(string a,string b){
        if(a.size()==b.size()) return a>b;
        if(a+b > b+a) return true;
        else return false;
    }
public:
    string largestNumber(vector<int>& nums) {
        vector<string> v[10];
        for(auto c:nums){
            string t=to_string(c);
            v[t[0]-'0'].push_back(t);
        }
        string ans;
        for(int i=9;i>=0;i--){
            sort(v[i].begin(),v[i].end(),[this] (string a, string b) {return cmp(a, b); });
            for(auto u:v[i])ans+=u;
        }
        if(ans.size()==v[0].size()) return "0";
        return ans;
    }
};