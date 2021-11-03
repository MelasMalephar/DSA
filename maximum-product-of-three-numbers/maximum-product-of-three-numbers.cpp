class Solution {
public:
    static bool cmp (int&a , int &b)
        {return a>b;}
    int maximumProduct(vector<int> v) {
        sort(v.begin(),v.end(),cmp);
         if(v[0]<0) return v[0]*v[1]*v[2];
        int n=v.size()-1;
        int a=v[n]*v[n-1]>v[1]*v[2]?v[n]*v[n-1]:v[1]*v[2];
        return a*v[0];
    }
};