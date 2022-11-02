class Solution {
public:
    string getHint(string s, string g) {
        int a=0,b=0;
        unordered_map<char,int> mp1,mp2;
        for(int i=0;i<s.size();i++){
            if(s[i]==g[i]) a++;
            else { 
                mp1[s[i]]++; 
                mp2[g[i]]++;
            }
        }
        for(int i=48;i!=58;i++){
            // cout<<i-'0'<<" -> "<<mp1[i]<<" "<<mp2[i]<<endl;
            if(mp1[i]!=0) b+=min(mp1[i],mp2[i]);
        }
        string ans;
        ans+=to_string(a)+"A";
        ans+=to_string(b)+"B";
        return ans;
    }
};