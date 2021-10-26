class Solution {
public:
    int thirdMax(vector<int>& n) {
      set<int> mp;
      for(auto &c:n)
          mp.insert(c);
      if(mp.size()<3) return *--mp.end();
      auto it=mp.end();
      advance(it,-3);  
      return *it;
    }
};