class Solution {
public:
    static bool cmp(const int &a,const int &b)
     { return a>b;}
    
    vector<string> findRelativeRanks(vector<int>& s) {
        auto n=s;
        sort(n.begin(),n.end(),cmp);
        // for(auto &d:n)
        //     cout<<d;
        vector<string> k;
        for(int i=0;i<s.size();i++)
        {auto it=find(n.begin(),n.end(),s[i])-n.begin();
          if(it==2) k.push_back("Bronze Medal");
          else if(it==1) k.push_back("Silver Medal");
          else if(it==0) k.push_back("Gold Medal");
          else { string c=to_string(it+1); k.push_back(c);}
        }
        return k;
    }
};