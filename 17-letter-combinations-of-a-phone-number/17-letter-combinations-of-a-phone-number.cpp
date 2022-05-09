class Solution {
public:
    vector<string> letterCombinations(string& digits) {
        if(digits.size()==0) return {};
        string sr[8]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        ans.push_back("");
        for(auto& c:digits){
                int n=ans.size();
                for(int j=0;j<n;j++){
                    for(int i=0;i<sr[c-'2'].size();i++){
                        ans.push_back(ans[j]+sr[c-'2'][i]);
                    }
                }
            }
        int t=0;
        for(auto& c:ans){
            if(c.size()==digits.size()){  break;}
            t++;
        }
        ans.erase(ans.begin(),ans.begin()+t);
        return ans;
    }
};