class Solution {
public:
    int calPoints(vector<string>& o) {
        vector<int> v;
        for(int i=0;i<o.size();i++)
        { auto k = o[i];   
          auto n = v.size()-1;
          if(k=="C"){v.pop_back();}
          else if(k=="D"){v.push_back(v[n]*2); }
          else if(k=="+"){v.push_back(v[n]+v[n-1]);}
          else v.push_back(stoi(k));
        }
        return accumulate ( v.begin( ) , v.end( ) , 0 );
    }
};