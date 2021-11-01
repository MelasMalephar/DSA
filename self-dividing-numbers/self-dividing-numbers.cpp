class Solution {
public:
    static bool canDivideByItself(int n) {
        int t = n;
        while (t > 0) {
            int digit = t % 10;
            if ((digit == 0) || (n % digit != 0)) {
                return false;
            }
            t /= 10;
        }
        return true;
    }
    
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        while (left<= right) {
            if (canDivideByItself(left)) {
                v.push_back(left);
            }
            left++;
        }

        return v;
    }
};