class Solution {
public:
    void sortColors(vector<int>& v) {
        int j=v.size()-1;
        vector<int> k,l,m;
        for(int i=j;i>=0;i--)
        { if(v[i] == 2) { k.push_back(v[i]);} 
          else if(!(v[i]&1)) 
          {m.push_back(v[i]);}
         else { l.push_back(v[i]);}
        }
       l.insert(l.end(),k.begin(),k.end()); 
       m.insert(m.end(),l.begin(),l.end());
       v=m;
    }
};