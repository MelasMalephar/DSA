class Solution {
public:
    bool isPerfectSquare(int& num) {
        if (num == 1) return true;
        int s = 1, e = num / 2;
        while(s <= e) {
            double mid = s + ((e - s)/2);
            double srt = num / mid;
            if (srt == mid) {
                return true;
            } else if (mid > srt) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return false;
    }
};