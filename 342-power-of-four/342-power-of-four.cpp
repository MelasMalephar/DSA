class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;
        int cnt=0;
        while(n>1){
            if(n&1) return false;
            else {n=n>>1; cnt++;}
        }
        return (cnt&1)==0;
    }
};