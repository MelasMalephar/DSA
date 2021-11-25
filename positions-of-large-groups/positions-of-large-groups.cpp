class Solution {
public:
    vector<vector<int>> largeGroupPositions(string& s) {
        int start=0,i,cnt=1;
        s.push_back('A');
        vector<vector<int>> v;
        for(i=1;i<s.size();i++)
        {   if(s[i]==s[start]){cnt++;}
            else
              { if(cnt>2) v.push_back({start,i-1});
                start=i; cnt=1;}
        }
        return v;
    }
};