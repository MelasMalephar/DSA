class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        int start=0;
        for(int i=0;i<s.size();i++){
            int temp=start;
            size_t found = s.find_last_of(s[temp++]);
            while(i<found){ found = max(found,s.find_last_of(s[++i]));}
            ans.push_back(found-start+1);
            start=found+1;
        }
        return ans;
    }
};