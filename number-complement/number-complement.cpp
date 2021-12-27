class Solution {
public:
    int findComplement(int &n) {
        unsigned m = ~0;
        while (n & m) m <<= 1;
        return ~m & ~n;
    }
};

// For example,

// num          = 00000101
// mask         = 11111000
// ~mask & ~num = 00000010