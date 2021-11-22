class Solution {
public:
    int smallestRangeI(vector<int>& v, int& k) {
     sort(v.begin(),v.end());
     int a,d,n=v.size()-1;
     a= v[0]+k;
     d= v[n]-k;
     if( a > d) return 0;
     return d-a;
    }
};