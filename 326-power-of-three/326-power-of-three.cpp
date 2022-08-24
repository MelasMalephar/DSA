class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<1 || (n&1)==0) return false;
        float t=log(n)/log(3);
        return t==ceil(t);
    }
};