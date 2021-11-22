class Solution {
public:
    int smallestRangeI(vector<int>& v, int& k) {
      int mi=10000,ma=-1;
      for(auto x:v){mi=min(mi,x);ma=max(ma,x);}
        return max(0,ma-k-mi-k);
    }
};