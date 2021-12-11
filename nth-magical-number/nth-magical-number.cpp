#define md 1000000007
class Solution {
public:
    long divTermCount(int a, int b, int lcm, long num)
    {return num / a + num / b - num / lcm;}
    
    int nthMagicalNumber(int n, int a, int b) {
    long low = 1, high = 1e14, mid;
    int lcm = (a * b) / gcd(a, b);
 
    while (low < high) {
        mid = low + (high - low) / 2;
        if (divTermCount(a, b, lcm, mid) < n)
            low = mid + 1;
        else
            high = mid;
    }
 
    return low%md;
    }
};