class Solution {
public:
    int hammingDistance(int &x, int &y) {
        bitset<32> a=x,b=y,c;
          cout<<"a : "<<a<<" - b :"<<b<<endl;
        c=a&b; 
        // cout<<"a&b : "<<c<<endl;
        a=a|b;
          // cout<<"a|b : "<<a<<endl;
        int count=0;
        while (a !=0 || c!=0) { 
        // cout<<"a - "<<a<<" c - "<<c<<endl;    
        if((a[0] != c[0])) count++;
        a >>= 1; c >>= 1;
          }
    return count;}
};