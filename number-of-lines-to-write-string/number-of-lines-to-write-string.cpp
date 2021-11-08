class Solution {
public:
    vector<int> numberOfLines(vector<int>& w, string& s) {
      int i=1,sum=0; 
      for(auto & c:s)
      {
          sum+= w[c - 'a'];
          if(sum>100)
          { i++; sum = w[c - 'a'];}
      }
       return {i,sum};
    }
};