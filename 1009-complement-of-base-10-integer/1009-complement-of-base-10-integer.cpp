class Solution {
public:
    int bitwiseComplement(int n) {
        if(!n) return 1;
        unsigned m = ~0;
        while (n & m) m <<= 1;
        return ~m & ~n;
    }
};