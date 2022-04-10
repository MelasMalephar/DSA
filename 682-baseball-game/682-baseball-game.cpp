class Solution {
public:
    int calPoints(vector<string>& o) {
        vector<int> v;
        for(auto &k :o)   
        { 
          if(k=="C"){v.pop_back();}
          else if(k=="D"){  v.push_back(  v.back() * 2  ); }
          else if(k=="+"){  v.push_back(  v.back() + v[v.end()-v.begin()-2] ); }
          else v.push_back(stoi(k));
        }
        return accumulate ( v.begin( ) , v.end( ) , 0 );
    }
};